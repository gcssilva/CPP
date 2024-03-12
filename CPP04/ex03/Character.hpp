#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <iostream>
#include <string>

class Character : public ICharacter
{
private:
	std::string	name;
	AMateria*	inv[4];
public:
	Character();
	Character(const std::string name);
	Character(const Character& c);
	Character&	operator=(const Character& c);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	~Character();
};

#endif