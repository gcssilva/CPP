#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:

	const std::string	name;
	int					grade;
	Bureaucrat();

public:

	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat& bureaucrat);
	Bureaucrat&	operator=(const Bureaucrat& bureaucrat);
	const std::string	getName() const;
	int	getGrade() const;
	void	increment();
	void	decrement();
	void	signForm(const Form& form) const;
	~Bureaucrat();
	class GradeTooHighExeption: public std::exception
	{
		public:
			virtual const char* what() const throw() {return "Grade too high";}
	};
	class GradeTooLowExeption: public std::exception
	{
		public:
			virtual const char* what() const throw() {return "Grade too low";}
	};

};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif