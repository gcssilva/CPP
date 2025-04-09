#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:

	const std::string	name;
	const int 			sign_grade;
	const int 			exec_grade;
	bool 				sign_status;

public:

	AForm();
	AForm(std::string name, const int sign_grade, const int exec_grade);
	AForm(const AForm& form);
	AForm& operator=(const AForm& form);
	const std::string	getName() const;
	bool	getSignStatus() const;
	int	getSignGrade() const;
	int	getExecGrade() const;
	void	beSigned(const Bureaucrat& bureaucrat);
	virtual ~AForm();
	virtual void	execute(const Bureaucrat& executor) const;
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
	class FormNotSignedExeption: public std::exception
	{
		public:
			virtual const char* what() const throw() {return "Form not signed";}
	};
	class AlreadySignedExeption: public std::exception
	{
		public:
			virtual const char* what() const throw() {return "Form already signed";}
	};

};

std::ostream&	operator<<(std::ostream& out, const AForm& form);

#endif