#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat guga("guga", 150);
		guga.increment();
		std::cout << guga << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
