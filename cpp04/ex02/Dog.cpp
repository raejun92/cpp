#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	brain = new Brain();
	std::cout << "Dog default constructor\n";
}

Dog::~Dog() {
	delete brain;
	std::cout << "Dog destroy\n";
}

Dog::Dog(const Dog& reference) {
	type = reference.type;
	brain = new Brain(*reference.brain);
	std::cout << "Dog copy constructor\n";
}

Dog& Dog::operator=(const Dog& reference) {
	type = reference.type;
	brain = new Brain(*reference.brain);
	std::cout << "Dog assignation operator contructor\n";
	return *this;
}

void Dog::makeSound() const {
	std::cout << "bow wow\n";
}

Brain& Dog::getBrain() {
	return *brain;
}