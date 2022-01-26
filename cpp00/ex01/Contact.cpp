#include "Contact.hpp"

std::string Contact::getFirstName() {
	return firstName;
}
void Contact::setFirstName(std::string firstName) {
	this->firstName = firstName;
}
std::string Contact::getLastName() {
	return lastName;
}
void Contact::setLastName(std::string lastName) {
	this->lastName = lastName;
}
std::string Contact::getNickName() {
	return nickName;
}
void Contact::setNickName(std::string nickName) {
	this->nickName = nickName;
}
std::string Contact::getPhoneNumber() {
	return phoneNumber;
}
void Contact::setPhoneNumber(std::string phoneNumber) {
	this->phoneNumber = phoneNumber;
}
std::string Contact::getDarkestSecret() {
	return darkestSecret;
}
void Contact::setDarkestSecret(std::string darkestSecret) {
	this->darkestSecret = darkestSecret;
}