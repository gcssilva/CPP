#ifndef EASYFIND_TPP
# define EASYFIND_TPP

# include "easyfind.hpp"

template <typename T>
typename T::iterator	easyfind(T& container, int n)
{
	typename T::iterator	x = std::find(container.begin(), container.end(), n);

	if (x == container.end())
		throw std::out_of_range("Value not found.");
	return x;
}

#endif