#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria()
{
	this->type = "ice";
}

Ice::Ice(const Ice& ice) : AMateria()
{
	*this = ice;
}

Ice&	Ice::operator=(const Ice& ice)
{
	this->type = ice.getType();
	return *this;
}

AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
}
