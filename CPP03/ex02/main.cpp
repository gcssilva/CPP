#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	st("robo");
	st.attack("outro robo");
	st.takeDamage(2);
	st.beRepaired(2);
	st.highFivesGuys();
	st.takeDamage(10);
	st.beRepaired(1);
	st.attack("outro robo");
	return 0;
}
