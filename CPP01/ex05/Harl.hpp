#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>


class Harl
{
private:

	typedef struct	s_list {
		std::string	level;
		void (Harl::*f)(void);
	}				t_list;
	t_list	levels[4];
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:

	Harl(void);
	void	complain(std::string level);

};

#endif