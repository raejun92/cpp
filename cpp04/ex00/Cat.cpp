#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat default constructor\n";
}

Cat::~Cat() {
	std::cout << "Cat destroy\n";
}

Cat::Cat(const Cat& reference) {
	type = reference.type;
	std::cout << "Cat copy constructor\n";
}

Cat& Cat::operator=(const Cat& reference) {
	type = reference.type;
	std::cout << "Cat assignation operator contructor\n";
	return *this;
}

void Cat::makeSound() const {
	std::cout << "meows meows\n";
}