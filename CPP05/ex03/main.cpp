#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	someRandomIntern;
	AForm	*rrf;
	Bureaucrat	boss("boss", 1);

	try
	{
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		std::cout << *rrf << std::endl;
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
	    delete (rrf);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}