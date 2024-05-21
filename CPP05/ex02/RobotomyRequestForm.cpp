#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), target("") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rrf): AForm("RobotomyRequestForm", 72, 45), target(rrf.target) {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& rrf)
{
	AForm::operator=(rrf);
	return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	AForm::execute(executor);
	std::srand(std::time(0));
	if ((std::rand() % 2) == 0)
		std::cout << this->target << " has been robotomized successfully." << std::endl;
	else
		std::cout << this->target << " robotomy failed." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {}
