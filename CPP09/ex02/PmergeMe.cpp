#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::vector<int>& vec, std::list<int>& list) {
	std::cout << "Before:\t";
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::clock_t vec_start = std::clock();
	mergeInsertion(vec);
	std::clock_t vec_finish = std::clock();
	std::clock_t list_start = std::clock();
	mergeInsertion(list);
	std::clock_t list_finish = std::clock();
	std::cout << "After:\t";
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	double vec_time = (static_cast<double>(vec_finish - vec_start) / CLOCKS_PER_SEC) * 1000;
	double list_time = (static_cast<double>(list_finish - list_start) / CLOCKS_PER_SEC) * 1000;

	std::cout << std::fixed << std::setprecision(3) << "Time to process a range of " << vec.size() << " elements with std::vector: " << vec_time << "ms" << std::endl;
	std::cout << std::fixed << std::setprecision(3) << "Time to process a range of " << list.size() << " elements with std::list: " << list_time << "ms" << std::endl;
}

PmergeMe::PmergeMe(PmergeMe const& other) {
	*this = other;
}

PmergeMe& PmergeMe::operator=(PmergeMe const& other) {
	(void)other;
	return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::mergeInsertion(std::vector<int>& vec) {
	if (vec.size() < 2)
		return;
	int center = vec.size() / 2;
	std::vector<int> left(vec.begin(), vec.begin() + center);
	std::vector<int> right(vec.begin() + center, vec.end());

	mergeInsertion(left);
	mergeInsertion(right);

	insert(vec, left, right);
}

void PmergeMe::mergeInsertion(std::list<int>& list) {
	if (list.size() < 2)
		return;
	int center = list.size() / 2;
	std::list<int> left;
	std::list<int> right;
	std::list<int>::iterator it = list.begin();
	for (int i = 0; i < center; ++i)
		left.push_back(*it++);
	for (unsigned long i = center; i < list.size(); ++i)
		right.push_back(*it++);

	mergeInsertion(left);
	mergeInsertion(right);

	insert(list, left, right);
}

void PmergeMe::insert(std::vector<int>& vec, std::vector<int>& left, std::vector<int>& right) {
	int i = 0;
	while (!left.empty() && !right.empty()) {
		if (*left.begin() < *right.begin()) {
			vec[i++] = left.front();
			left.erase(left.begin());
		}
		else {
			vec[i++] = right.front();
			right.erase(right.begin());
		}
	}
	while (!left.empty()) {
		vec[i++] = left.front();
		left.erase(left.begin());
	}
	while (!right.empty()) {
		vec[i++] = right.front();
		right.erase(right.begin());
	}
}

void PmergeMe::insert(std::list<int>& list, std::list<int>& left, std::list<int>& right) {
	std::list<int>::iterator it = list.begin();
	while (!left.empty() && !right.empty()) {
		if (*left.begin() < *right.begin()) {
			*it++ = left.front();
			left.erase(left.begin());
		}
		else {
			*it++ = right.front();
			right.erase(right.begin());
		}
	}
	while (!left.empty()) {
		*it++ = left.front();
		left.erase(left.begin());
	}
	while (!right.empty()) {
		*it++ = right.front();
		right.erase(right.begin());
	}
}
