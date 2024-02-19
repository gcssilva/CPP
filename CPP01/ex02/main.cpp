#include <iostream>
#include <iomanip>

int	main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << std::setw(31) << "String address: " << &string << std::endl;
	std::cout << std::setw(31) << "Address held by stringPTR: " << stringPTR << std::endl;
	std::cout << std::setw(31) << "Address held by stringREF: " << &stringREF << std::endl;

	std::cout << std::setw(31) << "String value: " << string << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

	return 0;
}