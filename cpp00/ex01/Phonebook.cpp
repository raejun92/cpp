#include "Phonebook.hpp"

PhoneBook::PhoneBook() {
	index = 0;
}

void PhoneBook::addContact() {
	std::string str;
	std::string nick;

	std::cout << "first name: ";
	std::cin >> str;
	contact[index % 8].setFirstName(str);
	std::cout << "last name: ";
	std::cin >> str;
	contact[index % 8].setLastName(str);
	std::cout << "nick name: ";
	std::cin >> nick;
	contact[index % 8].setNickName(nick);
	std::cout << "phone number: ";
	std::cin >> str;
	contact[index % 8].setPhoneNumber(str);
	std::cout << "darkest secret: ";
	std::cin >> str;
	contact[index % 8].setDarkestSecret(str);
	index++;
}

void PhoneBook::printContactList(Contact contact) {
	std::string line;

	line = contact.getFirstName();
	if (line.length() <= 10)
		std::cout << std::setw(10) << line;
	else {
		for (int i = 0; i < 9; i++)
			std::cout << line[i];
		std::cout << ".";
	}
	std::cout << "|";
	line = contact.getLastName();
	if (line.length() <= 10)
		std::cout << std::setw(10) << line;
	else {
		for (int i = 0; i < 9; i++)
			std::cout << line[i];
		std::cout << ".";
	}
	std::cout << "|";
	line = contact.getNickName();
	if (line.length() <= 10)
		std::cout << std::setw(10) << line;
	else {
		for (int i = 0; i < 9; i++)
			std::cout << line[i];
		std::cout << ".";
	}
	std::cout << "|";
	std::cout << "\n";
}

void PhoneBook::printContactDetail() {
	std::string searchIndex;

	std::cout << "Detail index: ";
	std::cin >> searchIndex;
	
	if (searchIndex == "1" || searchIndex == "2" || searchIndex == "3" || searchIndex == "4" || 
	searchIndex == "5" || searchIndex == "6" || searchIndex == "7" || searchIndex == "8") {
		int atoi;

		if (searchIndex == "1")
			atoi = 1;
		else if (searchIndex == "2")
			atoi = 2;
		else if (searchIndex == "3")
			atoi = 3;
		else if (searchIndex == "4")
			atoi = 4;
		else if (searchIndex == "5")
			atoi = 5;
		else if (searchIndex == "6")
			atoi = 6;
		else if (searchIndex == "7")
			atoi = 7;
		else if (searchIndex == "8")
			atoi = 8;
		if (atoi > index)
			std::cout << "Wrong index\n";
		else {
			std::cout << "First name: " << contact[atoi - 1].getFirstName() << std::endl;
			std::cout << "Last name: " << contact[atoi - 1].getLastName() << std::endl;
			std::cout << "Nickname: " << contact[atoi - 1].getNickName() << std::endl;
			std::cout << "Phone number: " << contact[atoi - 1].getPhoneNumber() << std::endl;
			std::cout << "Darkest secret: " << contact[atoi - 1].getDarkestSecret() << std::endl;
		}
	}
	else
		std::cout << "Wrong index\n";
}

void PhoneBook::searchContact() {
	if (index == 0) {
		std::cout << "No contact\n";
		return;
	}
	if (index / 8 >= 1) {
		for (int i = 0; i < 8; i++) {
			std::cout << "|";
			std::cout << std::setw(10) << i + 1 << "|";
			printContactList(contact[i]);
		}
	}
	else {
		for (int i = 0; i < index % 8; i++) {
			std::cout << "|";
			std::cout << std::setw(10) << i + 1 << "|";
			printContactList(contact[i]);
		}
	}
	printContactDetail();
}
