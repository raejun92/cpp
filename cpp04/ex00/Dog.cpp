#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog default constructor\n";
}

Dog::~Dog() {
	std::cout << "Dog destroy\n";
}

Dog::Dog(const Dog& reference) {
	type = reference.type;
	std::cout << "Dog copy constructor\n";
}

Dog& Dog::operator=(const Dog& reference) {
	type = reference.type;
	std::cout << "Dog assignation operator contructor\n";
	return *this;
}

void Dog::makeSound() const {
	std::cout << "bow wow\n";
}