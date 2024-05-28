#include "ScalarConverter.hpp"

void	ScalarConverter::convert(std::string sc)
{
	double	d;

	if (sc.find("inf") != std::string::npos || sc.find("nan") != std::string::npos) {
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		size_t plus = sc.find("+");
		switch (plus)
		{
		case std::string::npos:
			plus = 0;
			break;
		default:
			plus = 1;
			break;
		}
		if (sc == "inf" || sc == "-inf" || sc == "nan" || sc == "+inf") {
			std::cout << "Float: " << sc.substr(plus) << "f" << std::endl;
			std::cout << "Double: " << sc.substr(plus) << std::endl;
		}
		else {
			std::cout << "Float: " << sc.substr(plus) << std::endl;
			std::cout << "Double: " << sc.substr(plus, sc.size() - (1 + plus)) << std::endl;
		}
	}
	else {
		if (isdigit(sc[0]) || sc[0] == '-' || sc[0] == '+')
			d = std::strtod(sc.c_str(), NULL);
		else
			d = static_cast<double>(sc[0]);
		if (d > static_cast<double>(127) || d < 0 || (d - static_cast<int>(d)) != 0)
			std::cout << "Char: impossible" << std::endl;
		else if (!isprint(static_cast<int>(d)))
			std::cout << "Char: Non displayable" << std::endl;
		else
			std::cout << "Char: " << static_cast<char>(d) << std::endl;
		if (d > static_cast<double>(__INT_MAX__) || d < static_cast<double>(-__INT_MAX__) - 1)
			std::cout << "Int: impossible" << std::endl;
		else
			std::cout << "Int: " << static_cast<int>(d) << std::endl;
		std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
		std::cout << "Double: " << std::fixed << std::setprecision(1) << d << std::endl;
	}
}
