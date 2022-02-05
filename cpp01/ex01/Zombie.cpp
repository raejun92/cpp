#include "Zombie.hpp"

Zombie::Zombie(){}

void Zombie::announce() {
	std::cout << name << " BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie() {
	std::cout << name << " destory\n";
}

void Zombie::setName(int index, std::string name) {
	char itoa = index + '0';
	this->name = name + itoa;
}