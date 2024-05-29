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
	static void f_conv(float f);
	static void d_conv(double d);
	static void c_conv(char c);
	static void i_conv(int i);

};

#endif