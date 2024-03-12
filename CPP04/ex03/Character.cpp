#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"

Character::Character()
{
	this->name = "nameless";
	for (int i = 0; i < 4; ++i){
		this->inv[i] = NULL;
	}
}

Character::Character(const std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; ++i){
		this->inv[i] = NULL;
	}
}

Character::Character(const Character& c)
{
	*this = c;
}

Character&	Character::operator=(const Character& c)
{
	this->name = c.getName();
	for(int i = 0; i < 4; ++i){
		if (this->inv[i] != NULL){
			delete this->inv[i];
		}
		this->inv[i] = c.inv[i]->clone();
	}
	return *this;
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; ++i){
		if (this->inv[i] == NULL){
			this->inv[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >=0 && idx <= 3){
		this->inv[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >=0 && idx <= 3){
		if (this->inv[idx] != NULL){
			this->inv[idx]->use(target);
		}
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i){
		if (this->inv[i] != NULL){
			delete this->inv[i];
			this->inv[i] = NULL;
		}
	}
}
