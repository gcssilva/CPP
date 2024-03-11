#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor called" << std::endl;
	this->type = "";
}

Animal::Animal(const Animal& animal)
{
	std::cout << "Copy constructor called" << std::endl;
	this->type = animal.getType();
}

Animal&	Animal::operator=(const Animal& animal)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = animal.getType();
	return *this;
}

void	Animal::makeSound()
{
}

Animal::~Animal()
{
	std::cout << "Destructor called" << std::endl;
}

std::string	Animal::getType() const
{
	return this->type;
}
