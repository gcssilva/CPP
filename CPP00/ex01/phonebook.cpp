#include "phonebook.hpp"

static void	print_search(std::string str)
{
	if (str.length() > 10){
		for (int i = 0; i < 9; ++i){
			std::cout << str[i];
		}
		std::cout << ".|";
	}
	else{
		std::cout << std::setw(10) << str;
		std::cout << "|";
	}
}

static void	print_info(Contact contact)
{
	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
}

static int	is_nb(std::string str)
{
	for (int i = 0; str[i]; ++i){
		if (!isdigit(str[i]))
			return 0;
	}
	return 1;
}

void	PhoneBook::searchContact(void)
{
	int	idx;

	print_head();
	if (this->contacts_[0].getIndex()){
		std::cout << "|     index|First Name| Last Name| Nick Name|\n";
		for (int i=0; i < 8; ++i) {
			if (!this->contacts_[i].getIndex())
				break;
			std::cout << "|" << std::setw(10) << this->contacts_[i].getIndex() << "|";
			print_search(this->contacts_[i].getFirstName());
			print_search(this->contacts_[i].getLastName());
			print_search(this->contacts_[i].getNickname());
			std::cout << std::endl;
		}
		while (1){
			std::cout << "Type contact index: ";
			std::cin >> idx;
			if (std::cin.fail()){
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else if (idx > 0 && idx < 9){
				if (this->contacts_[idx - 1].getIndex()){
					print_head();
					print_info(this->contacts_[idx - 1]);
					break ;
				}
			}
			std::cout << "Invalid index\n";
			}
	}
	else
		std::cout << "PhoneBook is empty.\n";
}

void	PhoneBook::addContact(void)
{
	static int	i = 0;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	std::string phone_number;

	print_head();
	std::cout << "Type first name: ";
	std::cin >> first_name;
	std::cout << "Type last name: ";
	std::cin >> last_name;
	std::cout << "Type nickname: ";
	std::cin >> nickname;
	std::cout << "Type darkest secret: ";
	std::cin >> darkest_secret;
	while (1){
		std::cout << "Type phone number: ";
		std::cin >> phone_number;
		if (is_nb(phone_number))
			break ;
		std::cout << "Only numbers accepted\n";
	}
	Contact contact(i + 1, first_name, last_name, nickname, darkest_secret, phone_number);
	this->contacts_[i] = contact;
	if (++i == 8)
		i = 0;
	print_head();
}
