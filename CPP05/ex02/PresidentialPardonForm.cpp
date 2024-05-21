#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), target("") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): AForm("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ppf): AForm("PresidentialPardonForm", 25, 5), target(ppf.target) {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& ppf)
{
	AForm::operator=(ppf);
	return *this;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	AForm::execute(executor);
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}
