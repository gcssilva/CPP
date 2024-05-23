#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class Aform;
class Bureaucrat;

class PresidentialPardonForm : public AForm
{
private:

	const std::string	target;
	PresidentialPardonForm();

public:

	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& ppf);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm& ppf);
	void	execute(const Bureaucrat& executor) const;
	~PresidentialPardonForm();

};

#endif