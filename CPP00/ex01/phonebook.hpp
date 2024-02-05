#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {

private:

	int index_;
	std::string first_name_;
	std::string last_name_;
	std::string nickname_;
	std::string darkest_secret_;
	long phone_number_;

public:

	Contact(void);
	Contact(int index, std::string first_name, std::string last_name, std::string nickname, std::string darkest_secret, long phone_number);
	int getIndex(void);
	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickname(void);
	std::string getDarkestSecret(void);
	long getPhoneNumber(void);

};

class PhoneBook {

private:

	Contact contacts_[8];

public:

	void addContact(void);
	void searchContact(void);

};

#endif