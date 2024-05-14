#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(const std::string name, int grade): name(name), grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighExeption();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowExeption();
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat): name(bureaucrat.name), grade(bureaucrat.grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighExeption();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowExeption();
}


Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
	this->grade = bureaucrat.getGrade();
	return *this;
}

const std::string	Bureaucrat::getName() const
{
	return this->name;
}

int	Bureaucrat::getGrade() const
{
	return this->grade;
}

void	Bureaucrat::increment()
{
	if (this->grade - 1 < 1)
		throw Bureaucrat::GradeTooHighExeption();
	else
		this->grade--;
}

void	Bureaucrat::decrement()
{
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowExeption();
	else
		this->grade++;
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return out;
}

Bureaucrat::~Bureaucrat(){}
