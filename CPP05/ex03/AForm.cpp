#include "AForm.hpp"

AForm::AForm(): sign_grade(150), exec_grade(150), sign_status(false) {}

AForm::AForm(const std::string name, const int sign_grade, const int exec_grade) : name(name), sign_grade(sign_grade), exec_grade(exec_grade)
{
	if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowExeption();
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighExeption();
	sign_status = false;
}

AForm::AForm(const AForm& form): name(form.name), sign_grade(form.sign_grade), exec_grade(form.exec_grade)
{
	sign_status = form.getSignStatus();
}

AForm&	AForm::operator=(const AForm& form)
{
	this->sign_status = form.getSignStatus();
	return *this;
}

const std::string	AForm::getName() const
{
	return this->name;
}

bool	AForm::getSignStatus() const
{
	return this->sign_status;
}

int	AForm::getSignGrade() const
{
	return this->sign_grade;
}

int	AForm::getExecGrade() const
{
	return this->exec_grade;
}

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->getSignStatus() == true) {
		throw AForm::AlreadySignedExeption();
	}
	else if (bureaucrat.getGrade() > this->sign_grade) {
		throw AForm::GradeTooLowExeption();
	}
	else {
		this->sign_status = true;
	}
}

void	AForm::execute(const Bureaucrat& executor) const
{
	if (executor.getGrade() > this->exec_grade)
		AForm::GradeTooLowExeption();
	if (!this->sign_status)
		AForm::FormNotSignedExeption();
}

AForm::~AForm(){}

std::ostream&	operator<<(std::ostream& out, const AForm& form)
{
	out << "Name: " << form.getName() << ".\nGrade required to sign: " << form.getSignGrade() \
	<< ".\nGrade required to execute: " << form.getExecGrade() << ".\nStatus: ";
	if (form.getSignStatus() == true)
		out << "signed.";
	else
		out << "not signed.";
	return out;
}
