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
	std::string	in;

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
			getline(std::cin, in);
			if (in.empty() || in.size() != 1 || !is_nb(in))
				;
			else if((in[0] - 48) < 9 && (in[0] - 48) > 0){
				if (this->contacts_[(in[0] - 48) - 1].getIndex()){
					print_info(this->contacts_[(in[0] - 48) - 1]);
					break ;
				}
			}
			std::cout << "Invalid index\n";
			}
	}
	else
		std::cout << "PhoneBook is empty.\n";
}

static std::string	save_in(std::string s)
{
	std::string	in;

	while(1){
		std::cout << "Type " << s << ": ";
		getline(std::cin, in);
		if (!in.empty())
			break ;
		std::cout << s <<" cannot be empty\n";
		}
	return in;
}

void	PhoneBook::addContact(void)
{
	static int	i = 0;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	std::string phone_number;

	first_name = save_in("First Name");
	last_name = save_in("Last Name");
	nickname = save_in("Nickname");
	darkest_secret = save_in("Darkest Secret");
	while (1){
		std::cout << "Type phone number: ";
		getline(std::cin, phone_number);
		if (phone_number.empty() || !is_nb(phone_number))
			std::cout << "Only numbers accepted\n";
		else
			break ;
	}
	Contact contact(i + 1, first_name, last_name, nickname, darkest_secret, phone_number);
	this->contacts_[i] = contact;
	if (++i == 8)
		i = 0;
}
