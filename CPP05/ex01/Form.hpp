#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:

	const std::string	name;
	const int 			sign_grade;
	const int 			exec_grade;
	bool 				sign_status;
	Form();

public:

	Form(std::string name, const int sign_grade, const int exec_grade);
	Form(const Form& form);
	Form& operator=(const Form& form);
	const std::string	getName() const;
	bool	getSignStatus() const;
	int	getSignGrade() const;
	int	getExecGrade() const;
	void	beSigned(const Bureaucrat& bureaucrat);
	~Form();
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
	class AlreadySignedExeption: public std::exception
	{
		public:
			virtual const char* what() const throw() {return "Form already signed";}
	};
};

std::ostream&	operator<<(std::ostream& out, const Form& form);

#endif