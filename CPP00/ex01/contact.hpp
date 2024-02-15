#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "phonebook.hpp"

class Contact {

private:

	int index_;
	std::string first_name_;
	std::string last_name_;
	std::string nickname_;
	std::string darkest_secret_;
	std::string phone_number_;

public:

	Contact(void);
	Contact(int index, std::string first_name, std::string last_name, std::string nickname, std::string darkest_secret, std::string phone_number);
	int getIndex(void);
	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickname(void);
	std::string getDarkestSecret(void);
	std::string getPhoneNumber(void);

};

#endif