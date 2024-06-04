#include "easyfind.hpp"
#include <vector>

int	main()
{
	std::vector<int> vec;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(6);
	std::vector<int>::iterator	n = easyfind(vec, 7);

	std::cout << *n << std::endl;
	return 0;
}