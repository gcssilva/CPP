#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "[FragTrap]Default constructor called" << std::endl;
	this->hit_points_ = 100;
	this->energy_points_ = 100;
	this->attack_damage_ = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "[FragTrap]Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "[FragTrap]" << this->name_ << " says: High Five!" << std::endl;
}
