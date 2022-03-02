#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat default constructor\n";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destroy\n";
}

WrongCat::WrongCat(std::string type) {
	this->type = type;
	std::cout << "WrongCat constructor\n";
}

WrongCat::WrongCat(const WrongCat& reference) {
	type = reference.type;
	std::cout << "WrongCat copy constructor\n";
}

WrongCat& WrongCat::operator=(const WrongCat& reference) {
	type = reference.type;
	std::cout << "WrongCat assignation operator contructor\n";
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "wrong meows~ wrong meows~\n";
}