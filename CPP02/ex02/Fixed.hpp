#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:

	int	nb_;
	static const int	bits_ = 8;

public:
	Fixed();
	Fixed(const Fixed& nb);
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed&	operator=(const Fixed& nb);
	Fixed	operator+(const Fixed& nb);
	Fixed	operator-(const Fixed& nb);
	Fixed	operator*(const Fixed& nb);
	Fixed	operator/(const Fixed& nb);
	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);
	static Fixed&	min(Fixed& n1, Fixed& n2);
	static const Fixed&	min(const Fixed& n1, const Fixed& n2);
	static Fixed&	max(Fixed& n1, Fixed& n2);
	static const Fixed&	max(const Fixed& n1, const Fixed& n2);
	bool	operator>(const Fixed& nb);
	bool	operator<(const Fixed& nb);
	bool	operator>=(const Fixed& nb);
	bool	operator<=(const Fixed& nb);
	bool	operator==(const Fixed& nb);
	bool	operator!=(const Fixed& nb);
	int	getRawBits(void) const;
	int	toInt(void) const;
	float	toFloat(void) const;
	void	setRawBits(int const raw);
	~Fixed();
};

std::ostream&	operator<<(std::ostream& out, const Fixed& nb);

#endif