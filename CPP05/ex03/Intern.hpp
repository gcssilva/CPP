#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Bureaucrat;
class AForm;
class PresidentialPardonForm;
class RobotomyRequestForm;
class ShruberyCreationForm;

class Intern
{
public:

	Intern();
	Intern(Intern& intern);
	Intern&	operator=(Intern& intern);
	AForm*	makeForm(std::string name, std::string target);
	~Intern();
	class InvalidFormNameExeption: public std::exception {
		public:
			virtual const char* what() const throw() {return "Invalid form name.";}
	};

};

#endif