#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	st("robo");
	st.attack("outro robo");
	st.takeDamage(2);
	st.beRepaired(2);
	st.guardGate();
	st.takeDamage(10);
	st.beRepaired(1);
	st.attack("outro robo");
	return 0;
}
