#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "[Cat]Default constructor called" << std::endl;
	this->type = "Cat";
	this->brain_ = new Brain();
}

Cat::Cat(const Cat& cat) : Animal()
{
	std::cout << "[Cat]Copy constructor called" << std::endl;
	this->type = cat.getType();
	this->brain_ = new Brain(*cat.getBrain());
}

Cat&	Cat::operator=(const Cat& cat)
{
	std::cout << "[Cat]Copy assignment operator called" << std::endl;
	this->type = cat.getType();
	return *this;
}

Brain*	Cat::getBrain() const
{
	return this->brain_;
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Cat]Destructor called" << std::endl;
	delete this->brain_;
}
