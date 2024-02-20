#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:

	int	nb;
	static const int	bits = 8;

public:
	Fixed();
	Fixed(Fixed& nb);
	Fixed&	operator=(Fixed& nb);
	~Fixed();
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif