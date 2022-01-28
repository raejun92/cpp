#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
	private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	public:
	std::string getFirstName();
	void setFirstName(std::string);
	std::string getLastName();
	void setLastName(std::string);
	std::string getNickName();
	void setNickName(std::string);
	std::string getPhoneNumber();
	void setPhoneNumber(std::string);
	std::string getDarkestSecret();
	void setDarkestSecret(std::string);
};

#endif