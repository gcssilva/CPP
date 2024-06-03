#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <class T>
class Array
{
private:

	T* array;
	unsigned int	len;

public:

	Array();
	Array(unsigned int n);
	Array(const Array& a);
	Array&	operator=(const Array& a);
	T&	operator[](unsigned int i);
	unsigned int	get_len() const;
	~Array();

};

# include "Array.tpp"

#endif