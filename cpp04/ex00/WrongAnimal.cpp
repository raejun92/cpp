#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor\n";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destroy\n";
}

WrongAnimal::WrongAnimal(std::string type) {
	this->type = type;
	std::cout << "WrongAnimal constructor\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& reference) {
	type = reference.type;
	std::cout << "WrongAnimal copy constructor\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& reference) {
	type = reference.type;
	std::cout << "WrongAnimal assignation operator contructor\n";
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "wrong~ wrong~\n";
}

std::string WrongAnimal::getType() const {
	return type;
}