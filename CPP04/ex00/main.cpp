#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int	main(void)
// {
// 	Animal	some_animal = Animal();
// 	Dog	doguito = Dog();
// 	Cat	gatito = Cat();

// 	std::cout << "Generic animal type: \"" << some_animal.getType() << "\"\n";
// 	some_animal.makeSound();
// 	std::cout << "Doguito type: \"" << doguito.getType() << "\"\n";
// 	doguito.makeSound();
// 	std::cout << "Gatito type: \"" << gatito.getType() << "\"\n";
// 	gatito.makeSound();
// 	return 0;
// }

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
return 0;
}