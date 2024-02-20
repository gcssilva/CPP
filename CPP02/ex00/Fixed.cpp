#include "Fixed.hpp"

Fixed::Fixed()
{
	this->nb = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed& nb)
{
	this->nb = nb.nb;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed& nb)
{
	std::cout << "Copy assignment operator called" << std::endl;
}

Fixed::~Fixed()
{

}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "Copy constructor called" << std::endl;
}
