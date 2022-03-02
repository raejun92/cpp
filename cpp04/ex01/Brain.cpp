#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor\n";
}

Brain::~Brain() {
	std::cout << "Brain destroy\n";
}

Brain::Brain(const Brain& reference) {
	*this = reference;
	std::cout << "Brain copy constructor\n";
}

Brain& Brain::operator=(const Brain& reference) {
	for (int index = 0; index < 100; index++) {
		ideas[index] = reference.ideas[index];
	}
	std::cout << "Brain assignation operator contructor\n";
	return *this;
}

std::string Brain::getIdea(int index) {
	return ideas[index];
}

void Brain::setIdea(int index, std::string idea) {
	ideas[index] = idea;
}