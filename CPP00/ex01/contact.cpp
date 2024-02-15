#include "phonebook.hpp"

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

std::string	Contact::getPhoneNumber(void)
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
	this->phone_number_ = "";
}

Contact::Contact(int index, std::string first_name, std::string last_name, std::string nickname, std::string darkest_secret, std::string phone_number)
{
	this->index_ = index;
	this->first_name_ = first_name;
	this->last_name_ = last_name;
	this->nickname_ = nickname;
	this->darkest_secret_ = darkest_secret;
	this->phone_number_ = phone_number;
}
