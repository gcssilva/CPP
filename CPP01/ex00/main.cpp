#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombs = newZombie("zombs");
	zombs->announce();
	randomChomp("zumbs");
	delete zombs;
	return 0;
}