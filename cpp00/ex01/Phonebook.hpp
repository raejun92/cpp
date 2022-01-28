#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
	private:
	Contact contact[8];
	int index;
	public:
	PhoneBook();
	void addContact();
	void searchContact();
	void printContactList(Contact);
	void printContactDetail();
};

#endif