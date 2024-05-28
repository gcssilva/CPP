#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <limits>
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

};

#endif