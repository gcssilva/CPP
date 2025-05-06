#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(RPN const& other) {
	*this = other;
}

RPN& RPN::operator=(RPN const& other) {
	this->stk = other.stk;
	return *this;
}

RPN::~RPN() {}

void RPN::addNew(int number) {
	if (number > 9 || stk.size() == 2)
		throw std::runtime_error("Error: number bigger than 9");
	stk.push(number);
}

void RPN::operation(char op) {
	if (op != '*' && op != '/' && op != '+' && op != '-')
		throw std::runtime_error("Error");
	if (stk.size() != 2)
		throw std::runtime_error("Error");
	int y = stk.top();
	stk.pop();
	int x = stk.top();
	stk.pop();
	if (op == '/' && y == 0)
		throw std::runtime_error("Error: division by 0");
	switch (op)
	{
	case '*':
		addNew(x * y);
		break;
	case '/':
		addNew(x / y);
		break;
	case '+':
		addNew(x + y);
		break;
	case '-':
		addNew(x - y);
		break;
	default:
		break;
	}
}

void RPN::printResult() {
	std::cout << stk.top() << std::endl;
}
