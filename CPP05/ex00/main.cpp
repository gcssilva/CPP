#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat guga("guga", 150);
		std::cout << guga << std::endl;
		guga.increment();
		std::cout << guga << std::endl;
		guga.decrement();
		guga.decrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
