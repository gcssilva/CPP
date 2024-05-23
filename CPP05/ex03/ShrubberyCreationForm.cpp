#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("shrubbery creation", 145, 137), target("") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): AForm("shrubbery creation", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& scf): AForm("shrubbery creation", 145, 137), target(scf.target) {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& scf)
{
	AForm::operator=(scf);
	return *this;
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	AForm::execute(executor);
	std::ofstream	file;
	std::string	file_name = this->getName() + "_shrubbery";
	std::string	tree =
	"             * *\n"
	"           *    *  *\n"
	"       *  *    *     *  *\n"
	"       *     *    *  *    *\n"
	"   * *   *    *    *    *   *\n"
	"  *     *  *    * * .#  *   *\n"
	"    *   *     * #.  .# *   *\n"
	"   *     '#.  #: #' * *    *\n"
	"    *   * * '#. ##'       *\n"
	"    *       '###\n"
	"            '##\n"
	"            ##.\n"
	"           .##:\n"
	"           :###\n"
	"           ;###\n"
	"           ,####.\n"
	"/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\";
	file.open(file_name.c_str());
	if (!file.is_open()){
		std::cout << "Failed to open " << file_name << "." << std::endl;
		return ;
	}
	file << tree << std::endl;
	file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}