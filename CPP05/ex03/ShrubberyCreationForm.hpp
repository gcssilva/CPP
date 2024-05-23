#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "AForm.hpp"

class Aform;
class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
private:

	const std::string	target;
	ShrubberyCreationForm();

public:

	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& scf);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& scf);
	void	execute(const Bureaucrat& executor) const;
	~ShrubberyCreationForm();

};

#endif