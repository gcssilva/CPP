#include "Span.hpp"

int main() {
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		//std::cout << sp.shortestSpan() << std::endl;
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		Span sp2 = Span(5);
		std::vector<int> vec;
		vec.push_back(6);
		vec.push_back(3);
		vec.push_back(17);
		vec.push_back(9);
		vec.push_back(11);
		sp2.addNumbers(vec.begin(), vec.end());
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;

		//sp.addNumber(1);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}