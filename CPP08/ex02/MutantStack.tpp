#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

# include "MutantStack.hpp"

template <class T> MutantStack<T>::MutantStack() : std::stack< T, std::deque<T> >() {}

template <class T> MutantStack<T>::MutantStack(const MutantStack& ms) : std::stack< T, std::deque<T> >(ms) {}

template <class T> MutantStack<T>& MutantStack<T>::operator=(const MutantStack& ms) {
	if (this != &ms){
		std::stack< T, std::deque<T> >::operator=(ms);
	}
	return *this;
}

template <class T> typename std::deque<T>::iterator MutantStack<T>::begin(void) {
	return std::stack< T, std::deque<T> >::c.begin();
}

template <class T> typename std::deque<T>::iterator MutantStack<T>::end(void) {
	return std::stack< T, std::deque<T> >::c.end();
}

template <class T> MutantStack<T>::~MutantStack() {}

#endif