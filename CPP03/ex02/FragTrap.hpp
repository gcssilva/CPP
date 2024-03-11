#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

	FragTrap();

public:
	FragTrap(const std::string name);
	FragTrap(const FragTrap& ft);
	FragTrap&	operator=(const FragTrap& ft);
	void	highFivesGuys(void);
	~FragTrap(void);
};

#endif