#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
// const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound();
j->makeSound();
delete j;
delete i;

const Animal* animals[4];
Dog* dog = new Dog();
Cat* cat = new Cat(); 
for (int i = 0; i < 4; ++i){
	if (i < 2)	
		animals[i] = new Dog(*dog);
	else
		animals[i] = new Cat(*cat);
}
Brain* tmp = dog->getBrain();
std::cout << "[Original dog]Brain address: " << tmp << std::endl;
delete dog;
tmp = cat->getBrain();
std::cout << "[Original cat]Brain address: " << tmp << std::endl;
delete cat;
for (int i = 0; i < 4; ++i){
	tmp = animals[i]->getBrain();
	if (i < 2)
		std::cout << "[Copy dog " << i + 1 << "]Brain address: " << tmp << std::endl;
	else
		std::cout << "[Copy cat " << i - 1 << "]Brain address: " << tmp << std::endl;
	delete animals[i];
}

return 0;
}