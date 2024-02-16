#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombs = zombieHorde(30, "zoobee");
	for (int i = 0; i < 30; ++i){
		zombs[i].announce();
	}
	delete[] zombs;
	return 0;
}