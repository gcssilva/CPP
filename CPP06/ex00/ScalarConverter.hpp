#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <limits>
# include <cmath>
# include <iomanip>
# include <string>
# include <sstream>
# include <cstdlib>

class ScalarConverter
{
private:

	ScalarConverter();
	ScalarConverter(const ScalarConverter& sc);
	ScalarConverter&	operator=(const ScalarConverter& sc);
	~ScalarConverter();

public:

	static void	convert(std::string literal);
	static void f_conv(std::string n);
	static void d_conv(std::string n);
	static void c_conv(std::string n);
	static void i_conv(std::string n);

};

#endif