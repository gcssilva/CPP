#include "ScalarConverter.hpp"

void	ScalarConverter::convert(std::string sc)
{
	int	sig = 1;
	if (sc.find("-") != std::string::npos)
		sig = -1;
	if (sc.find("inf") != std::string::npos) {
		if (sc.find("ff"))
			ScalarConverter::f_conv((std::numeric_limits<float>::infinity()) * static_cast<float>(sig));
		else
			ScalarConverter::d_conv((std::numeric_limits<double>::infinity()) * static_cast<double>(sig));
	}
	else if (sc.find("nan") != std::string::npos) {
		std::cout << "Char: Impossible" << std::endl;
		std::cout << "Int: Impossible" << std::endl;
		std::cout << "Float: nanf" << std::endl;
		std::cout << "Double: nan" << std::endl;
	}
	else if (isdigit(sc[0]) || ((sc[0] == '-' || sc[0] == '+') && sc[1])) {
		if (sc.find("f") != std::string::npos)
			ScalarConverter::f_conv(std::strtof(sc.c_str(), NULL));
		else if (sc.find(".") != std::string::npos || sc.size() > 9)
			ScalarConverter::d_conv(std::strtod(sc.c_str(), NULL));
		else
			ScalarConverter::i_conv(atoi(sc.c_str()));
	}
	else
		ScalarConverter::c_conv(static_cast<char>(sc[0]));
}

void	ScalarConverter::c_conv(char c)
{
	std::cout << "Char: " << c << std::endl;
	std::cout << "Int: " << static_cast<int>(c) << std::endl;
	std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void	ScalarConverter::i_conv(int i)
{
	if (i > 127 || i < 0)
		std::cout << "Char: Impossible" << std::endl;
	else if (!isprint(i))
		std::cout << "Char: Non displayable" << std::endl;
	else
		std::cout << "Char: " << static_cast<char>(i) << std::endl;
	std::cout << "Int: " << i << std::endl;
	std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

void	ScalarConverter::f_conv(float f)
{
	if (f > 127 || f < 0)
		std::cout << "Char: Impossible" << std::endl;
	else if (!isprint(static_cast<int>(f)))
		std::cout << "Char: Non displayable" << std::endl;
	else
		std::cout << "Char: " << static_cast<char>(f) << std::endl;
	if (f > static_cast<float>(__INT_MAX__) || f < static_cast<float>(-__INT_MAX__) - 1)
		std::cout << "Int: Impossible" << std::endl;
	else
		std::cout << "Int: " << static_cast<int>(f) << std::endl;
	std::cout << "Float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
}

void	ScalarConverter::d_conv(double d)
{
	if (d > 127 || d < 0)
		std::cout << "Char: Impossible" << std::endl;
	else if (!isprint(static_cast<int>(d)))
		std::cout << "Char: Non displayable" << std::endl;
	else
		std::cout << "Char: " << static_cast<char>(d) << std::endl;
	if (d > static_cast<double>(__INT_MAX__) || d < static_cast<double>(-__INT_MAX__) - 1)
		std::cout << "Int: Impossible" << std::endl;
	else
		std::cout << "Int: " << static_cast<int>(d) << std::endl;
	std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
	std::cout << "Double: " << std::fixed << std::setprecision(1) << d << std::endl;
}
