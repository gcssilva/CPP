#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

	ScavTrap();

public:
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap& st);
	ScavTrap&	operator=(const ScavTrap& st);
	void	attack(const std::string& target);
	void	guardGate(void);
	~ScavTrap(void);
};

#endif