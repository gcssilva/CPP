#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "";
}

Zombie::~Zombie()
{
	std::cout << this->name << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
