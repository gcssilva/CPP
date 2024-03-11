#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{

private:

	std::string	name_;
	unsigned int	hit_points_;
	unsigned int	energy_points_;
	unsigned int	attack_damage_;
	ClapTrap();
	
public:

	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& ct);
	ClapTrap&	operator=(const ClapTrap& ct);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	std::string	getName(void) const;
	int	getHP(void) const;
	int	getEP(void) const;
	int	getAD(void) const;
	~ClapTrap();

};

#endif