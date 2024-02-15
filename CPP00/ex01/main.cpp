#include "phonebook.hpp"

void	print_head(void)
{
	std::cout << u8"\033[2J\033[1;1H";
	std::cout << "             *~ My PhoneBook! ~*             " << std::endl;
}

int	main(void)
{
	std::string str;
	PhoneBook phone_book;

	print_head();
	std::cout << "Welcome to the Phonebook!\n";
	while (1){
		std::cout << "Select one of the following options:\nADD, SEARCH or EXIT\n";
		std::cin >> str;
		if (str == "EXIT")
			return 0;
		else if (str == "ADD")
			phone_book.addContact();
		else if (str == "SEARCH")
			phone_book.searchContact();
		else{
			print_head();
			std::cout << "Invalid option\n";
		}
	}
}
