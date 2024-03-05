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

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->nb_ = n << this->bits_;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->nb_ = roundf(n * (1 << this->bits_));
}

Fixed&	Fixed::operator=(const Fixed& nb)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->nb_ = nb.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return this->nb_;
}

void	Fixed::setRawBits(int const raw)
{
	this->nb_ = raw;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(this->nb_) / (1 << this->bits_);
}

int	Fixed::toInt(void) const
{
	return this->nb_ >> this->bits_;
}

std::ostream&	operator<<(std::ostream& out, const Fixed& nb)
{
	out << nb.toFloat();
	return out;
}

bool	Fixed::operator>(const Fixed& nb)
{
	return this->nb_ > nb.getRawBits();
}

bool	Fixed::operator<(const Fixed& nb)
{
	return this->nb_ < nb.getRawBits();
}

bool	Fixed::operator>=(const Fixed& nb)
{
	return this->nb_ >= nb.getRawBits();
}

bool	Fixed::operator<=(const Fixed& nb)
{
	return this->nb_ <= nb.getRawBits();
}

bool	Fixed::operator==(const Fixed& nb)
{
	return this->nb_ == nb.getRawBits();
}

bool	Fixed::operator!=(const Fixed& nb)
{
	return this->nb_ != nb.getRawBits();
}

Fixed	Fixed::operator+(const Fixed& nb)
{
	return toFloat() + nb.toFloat();
}

Fixed	Fixed::operator-(const Fixed& nb)
{
	return toFloat() - nb.toFloat();
}

Fixed	Fixed::operator*(const Fixed& nb)
{
	return toFloat() * nb.toFloat();
}

Fixed	Fixed::operator/(const Fixed& nb)
{
	return toFloat() / nb.toFloat();
}

Fixed&	Fixed::operator++(void)
{
	this->nb_++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed inc(*this);
	this->nb_++;
	return inc;
}

Fixed&	Fixed::operator--(void)
{
	this->nb_--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed dec(*this);
	this->nb_--;
	return dec;
}

Fixed&	Fixed::min(Fixed& n1, Fixed& n2)
{
	if ( n1 < n2)
		return n1;
	return n2;
}

const Fixed&	Fixed::min(const Fixed& n1, const Fixed& n2)
{
	if ( n1.getRawBits() < n2.getRawBits())
		return n1;
	return n2;
}

Fixed&	Fixed::max(Fixed& n1, Fixed& n2)
{
	if ( n1 > n2)
		return n1;
	return n2;
}

const Fixed&	Fixed::max(const Fixed& n1, const Fixed& n2)
{
	if ( n1.getRawBits() > n2.getRawBits())
		return n1;
	return n2;
}
