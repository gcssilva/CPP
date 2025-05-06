#include "RPN.hpp"

int main(int argc, char** argv) {
	if (argc != 2)
		std::cerr << "Error: wrong input\n";
	try
	{
		RPN rpn;
		std::string input(argv[1]);
		for (unsigned long i = 0; i < input.size(); ++i) {
			if (input[i] != ' ') {
				if (isdigit(input[i]))
					rpn.addNew(input[i] - '0');
				else
					rpn.operation(input[i]);
			}
		}
		rpn.printResult();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}