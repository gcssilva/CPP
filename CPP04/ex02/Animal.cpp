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

std::string	Animal::getType() const
{
	return this->type;
}

Animal::~Animal()
{
	std::cout << "[Animal]Destructor called" << std::endl;
}
