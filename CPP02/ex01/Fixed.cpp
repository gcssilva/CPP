#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->nb = 0;
}

Fixed::Fixed(Fixed& nb)
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(nb);
}

Fixed&	Fixed::operator=(Fixed& nb)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->nb = nb.getRawBits();
	return nb;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->nb;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->nb = raw;
}
