#include "easyfind.hpp"
#include <vector>

int	main()
{
	try
	{
		std::vector<int> vec;

		vec.push_back(1);
		vec.push_back(2);
		vec.push_back(3);
		vec.push_back(4);
		vec.push_back(5);
		vec.push_back(6);
		std::vector<int>::iterator	n = easyfind(vec, 1);

		std::cout << *n << std::endl;

		n = easyfind(vec, 7);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}