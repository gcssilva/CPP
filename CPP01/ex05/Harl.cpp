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
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; ++i) {
		if (level == this->levels[i].level)
			(this->*levels[i].f)();
	}
}
