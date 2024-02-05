#include "phonebook.hpp"

static void	print_head(void)
{
	std::cout << u8"\033[2J\033[1;1H";
	std::cout << "            *~ My PhoneBook! ~*            " << std::endl;
}

int	Contact::getIndex(void)
{
	return this->index_;
}

std::string Contact::getFirstName(void)
{
	return this->first_name_;
}

std::string	Contact::getLastName(void)
{
	return this->last_name_;
}

std::string	Contact::getNickname(void)
{
	return this->nickname_;
}

std::string	Contact::getDarkestSecret(void)
{
	return this->darkest_secret_;
}

long	Contact::getPhoneNumber(void)
{
	return this->phone_number_;
}

Contact::Contact(void)
{
	this->index_ = 0;
	this->first_name_ = "";
	this->last_name_ = "";
	this->nickname_ = "";
	this->darkest_secret_ = "";
	this->phone_number_ = 0;
}

Contact::Contact(int index, std::string first_name, std::string last_name, std::string nickname, std::string darkest_secret, long phone_number)
{
	this->index_ = index;
	this->first_name_ = first_name;
	this->last_name_ = last_name;
	this->nickname_ = nickname;
	this->darkest_secret_ = darkest_secret;
	this->phone_number_ = phone_number;
}

void	PhoneBook::searchContact(void)
{
	std::string	s = "\0";

	print_head();
	for (int i=0; i < 8; ++i) {
		if (!this->contacts_[i].getIndex())
			break;
		std::cout << std::setw(10) << this->contacts_[i].getIndex() << "|";
		std::cout << std::setw(10) << this->contacts_[i].getFirstName() << "|";
		std::cout << std::setw(10) << this->contacts_[i].getLastName() << "|";
		std::cout << std::setw(10) << this->contacts_[i].getNickname() << std::endl;
	}
}

void	PhoneBook::addContact(void)
{
	static int	i = 0;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	long phone_number;

	std::cout << "Type first name: ";
	std::cin >> first_name;
	std::cout << "Type last name: ";
	std::cin >> last_name;
	std::cout << "Type nickname: ";
	std::cin >> nickname;
	std::cout << "Type darkest secret: ";
	std::cin >> darkest_secret;
	std::cout << "Type phone number: ";
	std::cin >> phone_number;
	Contact contact(i + 1, first_name, last_name, nickname, darkest_secret, phone_number);
	this->contacts_[i] = contact;
	if (++i == 8)
		i = 0;
}

int	main(void)
{
	std::string str;
	PhoneBook phone_book;

	print_head();
	while (1){
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
