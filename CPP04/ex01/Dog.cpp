#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "[Dog]Default constructor called" << std::endl;
	this->type = "Dog";
	this->brain_ = new Brain();
}

Dog::Dog(const Dog& dog) : Animal()
{
	std::cout << "[Dog]Copy constructor called" << std::endl;
	this->type = dog.getType();
	this->brain_ = new Brain(*dog.getBrain());
}

Dog&	Dog::operator=(const Dog& dog)
{
	std::cout << "[Dog]Copy assignment operator called" << std::endl;
	this->type = dog.getType();
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "BARK BARK!" << std::endl;
}

Brain*	Dog::getBrain() const
{
	return this->brain_;
}

Dog::~Dog()
{
	std::cout << "[Dog]Destructor called" << std::endl;
	delete this->brain_;
}
