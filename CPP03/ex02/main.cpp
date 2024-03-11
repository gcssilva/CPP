#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	st("robo");
	st.attack("outro robo");
	st.takeDamage(99);
	st.highFivesGuys();
	st.beRepaired(99);
	st.highFivesGuys();
	st.takeDamage(100);
	st.beRepaired(1);
	st.attack("outro robo");
	return 0;
}
