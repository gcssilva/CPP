#include "Weapon.hpp"

Weapon::Weapon(void)
{
	this->type = "";
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string&	Weapon::getType(void)
{
	return this->type;
}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}
