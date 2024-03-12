#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:

	std::string	type;

public:
	Animal();
	Animal(const Animal& animal);
	Animal&	operator=(const Animal& animal);
	std::string	getType() const;
	virtual void	makeSound() const;
	virtual ~Animal();
	virtual Brain*	getBrain() const;
};

#endif