#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	Animal *animal = new Cat();
    animal->makeSound();
    delete animal;

	Cat *cat = new Cat();
	cat->makeSound();
	delete cat;

	return 0;
}