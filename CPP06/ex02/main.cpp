#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void);
void	identify(Base* p);

int	main()
{
	Base* b = generate();
	identify(b);
	return 0;
}
