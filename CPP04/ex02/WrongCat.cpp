#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "[WrongCat]Default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& cat) : WrongAnimal()
{
	std::cout << "[WrongCat]Copy constructor called" << std::endl;
	this->type = cat.getType();
}

WrongCat&	WrongCat::operator=(const WrongCat& cat)
{
	std::cout << "[WrongCat]Copy assignment operator called" << std::endl;
	this->type = cat.getType();
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Meow!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat]Destructor called" << std::endl;
}
