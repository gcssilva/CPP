#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "[FragTrap]Default constructor called" << std::endl;
	this->hit_points_ = 100;
	this->energy_points_ = 100;
	this->attack_damage_ = 30;
}

FragTrap::FragTrap(const FragTrap& ft) : ClapTrap(ft.getName())
{
	std::cout << "[FragTrap]Copy constructor called" << std::endl;
	this->hit_points_ = ft.getHP();
	this->energy_points_ = ft.getEP();
	this->attack_damage_ = ft.getAD();
}

FragTrap&	FragTrap::operator=(const FragTrap& ft)
{
	std::cout << "[FragTrap]Copy assignment operator called" << std::endl;
	this->name_ = ft.getName();
	this->hit_points_ = ft.getHP();
	this->energy_points_ = ft.getEP();
	this->attack_damage_ = ft.getAD();
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "[FragTrap]Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->hit_points_ == 0){
		std::cout << "[FragTrap]" << this->name_ << " is dead!" << std::endl;
		return ;
	}
	if (this->energy_points_ == 0){
		std::cout << "[FragTrap]" << this->name_ << " have no energy!" << std::endl;
		return ;
	}
	std::cout << "[FragTrap]" << this->name_ << " says: High Five!" << std::endl;
}
