#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "[ScavTrap]Default constructor called" << std::endl;
	this->hit_points_ = 100;
	this->energy_points_ = 50;
	this->attack_damage_ = 20;
}

ScavTrap::ScavTrap(const ScavTrap& st) : ClapTrap(st.getName())
{
	std::cout << "[ScavTrap]Copy constructor called" << std::endl;
	this->hit_points_ = st.getHP();
	this->energy_points_ = st.getEP();
	this->attack_damage_ = st.getAD();
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& st)
{
	std::cout << "[ScavTrap]Copy assignment operator called" << std::endl;
	this->name_ = st.getName();
	this->hit_points_ = st.getHP();
	this->energy_points_ = st.getEP();
	this->attack_damage_ = st.getAD();
	return *this;
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
	if (this->hit_points_ == 0){
		std::cout << "[ScavTrap]" << this->name_ << " is dead!" << std::endl;
		return ;
	}
	if (this->energy_points_ == 0){
		std::cout << "[ScavTrap]" << this->name_ << " have no energy!" << std::endl;
		return ;
	}
	std::cout << "[ScavTrap]" << this->name_ << " is now in Gate keeper mode" << std::endl;
}
