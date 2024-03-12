#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice& ice);
	Ice&	operator=(const Ice& ice);
	AMateria* clone() const;
	void use(ICharacter& target);
	~Ice();
};

#endif