#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "[Cat]Default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& cat) : Animal()
{
	std::cout << "[Cat]Copy constructor called" << std::endl;
	this->type = cat.getType();
}

Cat&	Cat::operator=(const Cat& cat)
{
	std::cout << "[Cat]Copy assignment operator called" << std::endl;
	this->type = cat.getType();
	return *this;
}

void	Cat::makeSound()
{
	std::cout << this->type << ": Meow!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Cat]Destructor called" << std::endl;
}
