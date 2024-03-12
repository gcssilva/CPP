#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain]Default constructor called" << std::endl;
	for (int i = 0; i < 100; ++i){
		this->ideas[i] = "";
	}
}

Brain::Brain(const Brain& brain)
{
	std::cout << "[Brain]Copy constructor called" << std::endl;
	*this = brain;
}

Brain&	Brain::operator=(const Brain& brain)
{
	std::cout << "[Brain]Copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; ++i){
		this->ideas[i] = brain.getIdeas(i);
	}
	return *this;
}

std::string	Brain::getIdeas(int i) const
{
	if (i >= 0 && i <= 99)
		return this->ideas[i];
	return NULL;
}

Brain::~Brain()
{
	std::cout << "[Brain]Destructor called" << std::endl;
}