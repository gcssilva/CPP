#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ct = ClapTrap("robo");
	ct.attack("outro robo");
	ct.takeDamage(9);
	ct.beRepaired(9);
	ct.attack("outro robo");
	ct.takeDamage(10);
	ct.beRepaired(1);
	ct.attack("outro robo");
	return 0;
}
