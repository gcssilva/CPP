#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	st("robo");
	st.attack("outro robo");
	st.takeDamage(49);
	st.guardGate();
	st.beRepaired(49);
	st.guardGate();
	st.takeDamage(100);
	st.beRepaired(1);
	st.attack("outro robo");
	return 0;
}
