#include <ctime>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	static bool b = false;

	if (b == false) {
		std::srand(time(0));
		b = true;
	}
	int	n = std::rand() % 3;
	switch (n)
	{
	case 0:
		return new A();
		break;
	case 1:
		return new B();
		break;
	default:
		return new C();
		break;
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type C" << std::endl;
	else
		std::cout << "Wrong type" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "Type A" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "Type B" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "Type C" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
}
