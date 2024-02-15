#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include "contact.hpp"

class PhoneBook {

private:

	Contact contacts_[8];

public:

	void	addContact(void);
	void	searchContact(void);

};

void	print_head(void);

#endif
