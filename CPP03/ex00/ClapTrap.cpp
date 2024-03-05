#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : hit_points_(10), energy_points_(10), attack_damage_(0)
{
	this->name_ = name;
}

ClapTrap::ClapTrap(const ClapTrap& ct)
{
	
}