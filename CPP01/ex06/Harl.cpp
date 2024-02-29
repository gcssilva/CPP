#include "Harl.hpp"

Harl::Harl(void)
{
	this->levels[0].level = "DEBUG";
	this->levels[0].f = &Harl::debug;
	this->levels[1].level = "INFO";
	this->levels[1].f = &Harl::info;
	this->levels[2].level = "WARNING";
	this->levels[2].f = &Harl::warning;
	this->levels[3].level = "ERROR";
	this->levels[3].f = &Harl::error;
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complain(std::string level)
{
	int	f = 0;

	for (int i = 0; i < 4; ++i) {
		if (f == 1 || level == this->levels[i].level){
			(this->*levels[i].f)();
			f = 1;
		}
	}
	if (f == 0)
		std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
}
