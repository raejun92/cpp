#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	meta->makeSound();
	j->makeSound();
	i->makeSound();

	delete meta;
	delete j;
	delete i;

	const WrongAnimal *beta = new WrongAnimal();
	const WrongAnimal *k = new WrongCat();

	std::cout << beta->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;

	beta->makeSound();
	k->makeSound();

	delete beta;
	delete k;
	
	return 0;
}