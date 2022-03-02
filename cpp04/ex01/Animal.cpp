#include "Animal.hpp"

Animal::Animal() {
	type = "Animal";
	std::cout << "Animal default constructor\n";
}

Animal::~Animal() {
	std::cout << "Animal destroy\n";
}

Animal::Animal(std::string type) {
	this->type = type;
	std::cout << "Animal constructor\n";
}

Animal::Animal(const Animal& reference) {
	type = reference.type;
	std::cout << "Animal copy constructor\n";
}

Animal& Animal::operator=(const Animal& reference) {
	type = reference.type;
	std::cout << "Animal assignation operator contructor\n";
	return *this;
}

void Animal::makeSound() const {
	std::cout << "animal~ animal~\n";
}

std::string Animal::getType() const {
	return type;
}