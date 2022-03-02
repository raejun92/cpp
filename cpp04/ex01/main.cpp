#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	Animal *catsAndDogs[2];
	Cat *cat = new Cat();
	Dog *dog = new Dog();

	cat->getBrain().setIdea(0, "meow meow");
	dog->getBrain().setIdea(0, "bow bow");

	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			catsAndDogs[i] = new Cat(*cat);
		} else {
			catsAndDogs[i] = new Dog(*dog);
		}
	}

	Cat *deepCat = static_cast<Cat *>(catsAndDogs[0]);
	Dog *deepDog = static_cast<Dog *>(catsAndDogs[1]);

	std::cout << deepCat->getBrain().getIdea(0) << std::endl;
	std::cout << deepDog->getBrain().getIdea(0) << std::endl;

	for (int i = 0; i < 2; i++) {
		delete catsAndDogs[i];
	}

	delete cat;
	delete dog;

	// std::cout << system("leaks ex01") << std::endl;
	return 0;
}