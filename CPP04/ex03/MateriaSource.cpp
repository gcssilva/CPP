#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i){
		this->learned[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& ms)
{
	*this = ms;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& ms)
{
	for (int i = 0; i < 4; ++i){
		if (this->learned[i] != NULL){
			delete this->learned[i];
		}
		this->learned[i] = ms.getLearned(i)->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; ++i){
		if (this->learned[i] == NULL){
			this->learned[i] = m->clone();
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i){
		if (this->learned[i] != NULL && type == this->learned[i]->getType())
			return this->learned[i]->clone();
	}
	return NULL;
}

AMateria*	MateriaSource::getLearned(int i) const
{
	if (i >= 0 && i <= 3){
		if (this->learned[i] != NULL){
			return this->learned[i];
		}
	}
	return NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i){
		if (this->learned[i] != NULL){
			delete this->learned[i];
		}
	}
}
