#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat bureaucrat("Bureau", 1);

		ShrubberyCreationForm shrubberyForm("Garden");
		RobotomyRequestForm robotomyForm("Target");
		PresidentialPardonForm pardonForm("Person");

		std::cout << bureaucrat << std::endl;
		std::cout << shrubberyForm << std::endl;
		std::cout << robotomyForm << std::endl;
		std::cout << pardonForm << std::endl;

		bureaucrat.signForm(shrubberyForm);
		bureaucrat.signForm(robotomyForm);
		bureaucrat.signForm(pardonForm);

		std::cout << bureaucrat << std::endl;
		std::cout << shrubberyForm << std::endl;
		std::cout << robotomyForm << std::endl;
		std::cout << pardonForm << std::endl;

		bureaucrat.executeForm(shrubberyForm);
		bureaucrat.executeForm(robotomyForm);
		bureaucrat.executeForm(pardonForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
