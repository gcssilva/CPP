#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat guga("guga", 50);
		Form form1("formulario 1", 49, 10);
		std::cout << form1;
		guga.increment();
		form1.beSigned(guga);
		std::cout << form1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
