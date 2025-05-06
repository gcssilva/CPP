#include "PmergeMe.hpp"

int main(int argc, char** argv) {
	if (argc < 2)
		return 0;
	try {
		std::vector<int> vec;
		std::list<int> list;
		for (int i = 1; i < argc; ++i) {
			if (!argv[i] || !*argv[i]) {
				std::cout << "aqui\n";
				continue;
			}
			std::istringstream iss(argv[i]);
			std::string nb(argv[i]);
			int number;
			iss >> number;
			if (number < 0 || nb.find_first_not_of("0123456789") != std::string::npos)
				throw std::invalid_argument("Error: argument is not a positive integer");
			if (!iss.eof())
				continue;
			vec.push_back(number);
			list.push_back(number);
		}
		PmergeMe merge(vec, list);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
}