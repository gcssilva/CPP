#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "[ScavTrap]Default constructor called" << std::endl;
	this->hit_points_ = 100;
	this->energy_points_ = 50;
	this->attack_damage_ = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "[ScavTrap]Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hit_points_ == 0){
		std::cout << "[ScavTrap]" << this->name_ << " is dead!" << std::endl;
		return ;
	}
	if (this->energy_points_ > 0){
		std::cout << "[ScavTrap]" << this->name_ << " attacks " << target << ", causing " << this->attack_damage_ << " points of damage!" << std::endl;
		this->energy_points_--;
	}
	else{
		std::cout << "[ScavTrap]" << this->name_ << " have no energy!" << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "[ScavTrap]" << this->name_ << " is now in Gate keeper mode" << std::endl;
}
