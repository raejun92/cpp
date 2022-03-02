#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	brain = new Brain();
	std::cout << "Cat default constructor\n";
}

Cat::~Cat() {
	delete brain;
	std::cout << "Cat destroy\n";
}

Cat::Cat(const Cat& reference) {
	type = reference.type;
	brain = new Brain(*reference.brain);
	std::cout << "Cat copy constructor\n";
}

Cat& Cat::operator=(const Cat& reference) {
	type = reference.type;
	brain = new Brain(*reference.brain);
	std::cout << "Cat assignation operator contructor\n";
	return *this;
}

void Cat::makeSound() const {
	std::cout << "meows meows\n";
}

Brain& Cat::getBrain() {
	return *brain;
}