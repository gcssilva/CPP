#include "Form.hpp"

Form::Form(const std::string name, const int sign_grade, const int exec_grade) : name(name), sign_grade(sign_grade), exec_grade(exec_grade)
{
	if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowExeption();
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighExeption();
	sign_status = 0;
}

Form::Form(const Form& form): name(form.name), sign_grade(form.sign_grade), exec_grade(form.exec_grade)
{
	sign_status = form.getSignStatus();
}

Form&	Form::operator=(const Form& form)
{
	this->sign_status = form.getSignStatus();
	return *this;
}

const std::string	Form::getName() const
{
	return this->name;
}

bool	Form::getSignStatus() const
{
	return this->sign_status;
}

int	Form::getSignGrade() const
{
	return this->sign_grade;
}

int	Form::getExecGrade() const
{
	return this->exec_grade;
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->getSignStatus() == true) {
		throw Form::AlreadySignedExeption();
	}
	else if (bureaucrat.getGrade() > this->sign_grade) {
		throw Form::GradeTooLowExeption();
	}
	else {
		this->sign_status = true;
	}
}

Form::~Form(){}

std::ostream&	operator<<(std::ostream& out, const Form& form)
{
	out << "Name: " << form.getName() << ".\nGrade required to sign: " << form.getSignGrade() \
	<< ".\nGrade required to execute: " << form.getExecGrade() << ".\nStatus: ";
	if (form.getSignStatus())
		out << "signed." << std::endl;
	else
		out << "not signed." << std::endl;
	return out;
}
