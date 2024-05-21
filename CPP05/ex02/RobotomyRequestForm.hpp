#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <ctime>
# include <cstdlib>
# include <iostream>
# include "AForm.hpp"

class Aform;
class Bureaucrat;

class RobotomyRequestForm : public AForm
{
private:

	const std::string	target;
	RobotomyRequestForm();

public:

	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& rrf);
	RobotomyRequestForm&	operator=(const RobotomyRequestForm& rrf);
	void	execute(const Bureaucrat& executor) const;
	~RobotomyRequestForm();

};

#endif