#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
	this->type = "";
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}
AMateria::AMateria(const AMateria& m)
{
	*this = m;
}

AMateria&	AMateria::operator=(const AMateria& m)
{
	this->type = m.getType();
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* does nothing to " << target.getName() << " *" << std::endl;
}

AMateria::~AMateria()
{
}