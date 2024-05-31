#include "iter.hpp"

void	print_i(int i)
{
	std::cout << i;
}

void	print_c(char c)
{
	std::cout << c;
}

int	main()
{
	int		i[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char	c[] = "helo world";

	::iter(i, 10, print_i);
	std::cout << std::endl;
	::iter(c, 10, print_c);
	std::cout << std::endl;
	return 0;
}
