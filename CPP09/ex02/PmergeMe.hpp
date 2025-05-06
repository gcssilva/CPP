#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <vector>
# include <list>
# include <ctime>

class PmergeMe
{
	private:

		PmergeMe();
		
	public:

		PmergeMe(std::vector<int>& vec, std::list<int>& list);
		PmergeMe(PmergeMe const& other);
		PmergeMe& operator=(PmergeMe const& other);
		~PmergeMe();

		void mergeInsertion(std::vector<int>& vec);
		void mergeInsertion(std::list<int>& list);
		void insert(std::vector<int>& vec, std::vector<int>& left, std::vector<int>& right);
		void insert(std::list<int>& list, std::list<int>& left, std::list<int>& right);

};

#endif