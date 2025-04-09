#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern& intern) {*this = intern;}

Intern&	Intern::operator=(Intern& intern) {
	(void)intern;
	return *this;
}

AForm*	Intern::makeForm(std::string name, std::string target) {
	int form = -1;
	AForm*	new_form;
	std::string	forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	while (++form < 3) {
		if (forms[form] == name)
			break ;
	}
	switch (form)
	{
	case 0:
		new_form = new ShrubberyCreationForm(target);
		break;
	case 1:
		new_form = new RobotomyRequestForm(target);
		break;
	case 2:
		new_form = new PresidentialPardonForm(target);
		break;
	default:
		throw InvalidFormNameExeption();
	}
	std::cout << "Intern creates " << name << " form." << std::endl;
	return new_form;
}

Intern::~Intern() {}
