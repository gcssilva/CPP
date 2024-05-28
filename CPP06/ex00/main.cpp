#include "ScalarConverter.hpp"

int	main(int argc, char** argv)
{
	int	flag = 0;

	if (argc != 2) {
		std::cout << "Invalid number of arguments" << std::endl;
		return 1;
	}
	std::string	literal = argv[1];
	if (literal == "inf" || literal == "-inf" || literal == "nan"\
		|| literal == "inff" || literal == "-inff" || literal == "nanf"\
		|| literal == "+inff" || literal == "+inf") {
		ScalarConverter::convert(literal);
		return 0;
	}
	if (argv[1][0] != '-' && argv[1][0] != '+'&& !isdigit(argv[1][0]) && argv[1][1]) {
		std::cout << "Convertion not possible" << std::endl;
		return 1;
	}
	for (int i = 1; argv[1][i]; ++i) {
		if (argv[1][i] == 'f' && !argv[1][i + 1])
			break;
		if (!isdigit(argv[1][i]) && argv[1][i] != '.') {
			std::cout << "Convertion not possible" << std::endl;
			return 1;
		}
		if (argv[1][i] == '.') {
			if (flag) {
				std::cout << "Convertion not possible" << std::endl;
				return 1;
			}
			flag++;
		}
	}
	ScalarConverter::convert(literal);
	return 0;
}