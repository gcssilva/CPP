#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure& ice);
	Cure&	operator=(const Cure& ice);
	AMateria* clone() const;
	void use(ICharacter& target);
	~Cure();
};

#endif