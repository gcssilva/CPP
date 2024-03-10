#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : hit_points_(10), energy_points_(10), attack_damage_(0)
{
	std::cout << "Default constructor called" << std::endl;
	this->name_ = name;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ct)
{
	std::cout << "Copy constructor called" << std::endl;
	this->name_ = ct.getName();
	this->hit_points_ = ct.getHP();
	this->energy_points_ = ct.getEP();
	this->attack_damage_ = ct.getAD();
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& ct)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->name_ = ct.getName();
	this->hit_points_ = ct.getHP();
	this->energy_points_ = ct.getEP();
	this->attack_damage_ = ct.getAD();
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hit_points_ == 0){
		std::cout << this->name_ << " is dead!" << std::endl;
		return ;
	}
	if (this->energy_points_ > 0){
		std::cout << this->name_ << " attacks " << target << ", causing " << this->attack_damage_ << " points of damage!" << std::endl;
		this->energy_points_--;
	}
	else{
		std::cout << this->name_ << " have no energy!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points_ == 0){
		std::cout << this->name_ << " is dead!" << std::endl;
		return ;
	}
	if (amount > this->hit_points_){
		std::cout << this->name_ << " takes " << this->hit_points_ << " points of damage!" << std::endl;
		this->hit_points_ = 0;
	}
	else{
		std::cout << this->name_ << " takes " << amount << " points of damage!" << std::endl;
		this->hit_points_ -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points_ == 0){
		std::cout << this->name_ << " is dead!" << std::endl;
		return ;
	}
	if (amount > this->energy_points_){
		std::cout << this->name_ << " restores " << this->energy_points_ << " hit points!" << std::endl;
		this->hit_points_ += this->energy_points_;
		this->energy_points_ = 0;
	}
	else{
		std::cout << this->name_ << " restores " << amount << " hit points!" << std::endl;
		this->hit_points_ += amount;
		this->energy_points_ -= amount;
	}
}

std::string	ClapTrap::getName(void) const
{
	return this->name_;
}

int	ClapTrap::getHP(void) const
{
	return this->hit_points_;
}

int	ClapTrap::getEP(void) const
{
	return this->energy_points_;
}

int	ClapTrap::getAD(void) const
{
	return this->attack_damage_;
}
