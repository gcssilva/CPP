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
	~Fixed();
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int	toInt(void) const;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& nb);

#endif