#include "ScalarConverter.hpp"

void	ScalarConverter::convert(std::string sc)
{
	ScalarConverter::c_conv(sc);
	ScalarConverter::i_conv(sc);
	ScalarConverter::f_conv(sc);
	ScalarConverter::d_conv(sc);
}

void	ScalarConverter::c_conv(std::string n)
{
	int i;
	char c;
	std::stringstream s;
	s << n;

	if (n == "nan" || n == "nanf" || n == "inf" || n == "inff" || n == "-inf" || n == "-inff") {
		std::cout << "Char: Impossible" << std::endl;
	}
	else if (n.length() == 1) {
		if (!isprint(n[0]) || isdigit(n[0])){
			std::cout << "Char: Non Displayable" << std::endl;
		}
		else {
			std::cout << "Char: '" << n[0] << "'" << std::endl;
		}
	}
	else {
		s >> i;
		if (i >= std::numeric_limits<int>::min() && i <= std::numeric_limits<int>::max()) {
			if (i < 0 || i > 127) {
				std::cout << "Char: Impossible" << std::endl;
			}
			else if (!isprint(i)) {
				std::cout << "Char: Non Displayable" << std::endl;
			}
			else {
				c = i;
				std::cout << "Char: '" << c << "'" << std::endl;
			}
		}
		else {
			std::cout << "Char: Impossible" << std::endl;
		}
	}

}

void	ScalarConverter::i_conv(std::string n)
{
	long int i;
	std::stringstream s;
	s << n;
	s >> i;

	if (n == "nan" || n == "nanf" || n == "inf" || n == "inff" || n == "-inf" || n == "-inff") {
		std::cout << "Int: Impossible" << std::endl;
	}
	else if (n.length() == 1 && !isdigit(n[0])) {
		std::cout << "Int: " << static_cast<int>(n[0]) << std::endl;
	}
	else if (i >= std::numeric_limits<int>::min() && i <= std::numeric_limits<int>::max()) {
		std::cout << "Int: " << i << std::endl;
	}
	else {
		std::cout << "Int: Impossible" << std::endl;
	}
}

void	ScalarConverter::f_conv(std::string n)
{
	float f;
	std::stringstream s;
	s << n;
	s >> f;

	if (n == "nan" || n == "nanf") {
		std::cout << "Float: nanf" << std::endl;
	}
	else if (n == "inf" || n == "inff" || n == "-inf" || n == "-inff") {
		if (n[0] == '-') {
			std::cout << "Float: -inff" << std::endl;
		}
		else {
			std::cout << "Float: inff" << std::endl;
		}
	}
	else if (n.length() == 1 && !isdigit(n[0])) {
		std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(n[0]) << "f" << std::endl;
	}
	else {
		std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f" << std::endl;
	}
}

void	ScalarConverter::d_conv(std::string n)
{
	double d;
	std::stringstream s;
	s << n;
	s >> d;
	if (n == "nan" || n == "nanf") {
		std::cout << "Double: nan" << std::endl;
	}
	else if (n == "inf" || n == "inff" || n == "-inf" || n == "-inff") {
		if (n[0] == '-') {
			std::cout << "Double: -inf" << std::endl;
		}
		else {
			std::cout << "Double: inf" << std::endl;
		}
	}
	else if (n.length() == 1 && !isdigit(n[0])) {
		std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(n[0]) << std::endl;
	}
	else {
		std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(d) << std::endl;
	}
}
