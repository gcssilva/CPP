#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	learned[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& ms);
	MateriaSource&	operator=(const MateriaSource& ms);
	void learnMateria(AMateria* m);
	AMateria*	createMateria(std::string const & type);
	AMateria*	getLearned(int i) const;
	~MateriaSource();
};
#endif