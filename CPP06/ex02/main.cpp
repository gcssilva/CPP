#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

int	main()
{
	Base* b = generate();
	identify(b);
	identify(*b);
	delete b;
	std::cout << std::endl;
	Base* b2 = generate();
	identify(b2);
	identify(*b2);
	delete b2;
	return 0;
}
