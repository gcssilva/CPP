#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:

	int	nb_;
	static const int	bits_ = 8;

public:
	Fixed();
	Fixed(const Fixed& nb);
	Fixed&	operator=(const Fixed& nb);
	~Fixed();
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif