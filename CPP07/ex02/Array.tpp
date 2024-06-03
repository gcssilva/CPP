#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <class T>
Array<T>::Array()
{
	this->array = new T[0];
	this->len = 0;
}

template <class T>
Array<T>::Array(unsigned int n)
{
	this->array = new T[n];
	this->len = n;
}

template <class T>
Array<T>::Array(const Array& a)
{
	this->len = a.get_len();
	this->array = new T[this->len];
	for (unsigned int i = 0; i < this->len; ++i)
		this->array[i] = a.array[i];
}

template <class T>
Array<T>&	Array<T>::operator=(const Array& a)
{
	this->len = a.get_len();
	delete[] this->array;
	this->array = new T[this->len];
	for (unsigned int i = 0; i < this->len; ++i)
		this->array[i] = a.array[i];
	return *this;
}

template <class T>
T&	Array<T>::operator[](unsigned int i)
{
	if (i < this->len)
		return this->array[i];
	else
		throw std::out_of_range("Invalid index.");
}

template <class T>
unsigned int	Array<T>::get_len() const
{
	return this->len;
}

template <class T>
Array<T>::~Array()
{
	delete[] this->array;
}

#endif