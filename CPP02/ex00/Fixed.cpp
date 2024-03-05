#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->nb_ = 0;
}

Fixed::Fixed(const Fixed& nb)
{
	std::cout << "Copy constructor called" << std::endl;
	operator=(nb);
}

Fixed&	Fixed::operator=(const Fixed& nb)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->nb_ = nb.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->nb_;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->nb_ = raw;
}
