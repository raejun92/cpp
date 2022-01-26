#include "Phonebook.hpp"

int main() {
	std::string input;
	PhoneBook phoneBook;
	
	while (1) {
		std::cout << "Please input a command from [ADD, SEARCH, EXIT]\n";
		std::cin >> input;
		if (std::cin.eof())
			break;
		if (input == "EXIT")
			break;
		else if (input == "ADD")
			phoneBook.addContact();
		else if (input == "SEARCH")
			phoneBook.searchContact();
		else 
			std::cout << "Wrong command\n";
	}
	return (0);
}