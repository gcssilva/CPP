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

void	Bureaucrat::signForm(AForm& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " could not sign " << form.getName() << " because " << e.what() << std::endl;;
	}
}

void	Bureaucrat::executeForm(const AForm& form)
{
	try {
		form.execute(*this);
		std::cout << *this << " executed form " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " could not execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return out;
}

Bureaucrat::~Bureaucrat(){}
