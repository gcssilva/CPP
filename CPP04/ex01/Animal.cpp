#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "[Animal]Default constructor called" << std::endl;
	this->type = "";
}

Animal::Animal(const Animal& animal)
{
	std::cout << "[Animal]Copy constructor called" << std::endl;
	this->type = animal.getType();
}

Animal&	Animal::operator=(const Animal& animal)
{
	std::cout << "[Animal]Copy assignment operator called" << std::endl;
	this->type = animal.getType();
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
}

Brain*	Animal::getBrain() const
{
	return NULL;
}

Animal::~Animal()
{
	std::cout << "[Animal]Destructor called" << std::endl;
}

std::string	Animal::getType() const
{
	return this->type;
}
