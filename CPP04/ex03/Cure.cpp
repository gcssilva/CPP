#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria()
{
	this->type = "cure";
}

Cure::Cure(const Cure& cure) : AMateria()
{
	*this = cure;
}

Cure&	Cure::operator=(const Cure& cure)
{
	this->type = cure.getType();
	return *this;
}

AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
}