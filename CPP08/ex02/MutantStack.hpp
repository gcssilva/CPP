#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <vector>

template <typename T> class MutantStack : public std::stack< T, std::deque<T> >
{
public:
	MutantStack();
	MutantStack(const MutantStack& ms);
	MutantStack& operator=(const MutantStack& ms);
	typedef typename std::deque<T>::iterator iterator;
	iterator begin();
	iterator end();
	~MutantStack();
};

# include "MutantStack.tpp"

#endif