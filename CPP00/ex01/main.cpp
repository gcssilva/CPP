#include "phonebook.hpp"

int	main(void)
{
	std::string str;
	PhoneBook phone_book;

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
		else
			std::cout << "Invalid option\n";
	}
}
