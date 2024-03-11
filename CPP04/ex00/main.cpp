#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal	some_animal = Animal();
	Dog	doguito = Dog();
	Cat	gatito = Cat();

	std::cout << "Generic animal type: \"" << some_animal.getType() << "\"\n";
	some_animal.makeSound();
	std::cout << "Doguito type: \"" << doguito.getType() << "\"\n";
	doguito.makeSound();
	std::cout << "Gatito type: \"" << gatito.getType() << "\"\n";
	gatito.makeSound();
	return 0;
}
