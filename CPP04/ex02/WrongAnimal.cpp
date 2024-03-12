#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "[WrongAnimal]Default constructor called" << std::endl;
	this->type = "Wrong type";
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal)
{
	std::cout << "[WrongAnimal]Copy constructor called" << std::endl;
	this->type = animal.getType();
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& animal)
{
	std::cout << "[WrongAnimal]Copy assignment operator called" << std::endl;
	this->type = animal.getType();
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "This is not right" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal]Destructor called" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}
