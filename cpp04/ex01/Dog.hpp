#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
	Dog();
	~Dog();
	Dog(const Dog&);
	Dog& operator=(const Dog&);
	virtual void makeSound() const;
	Brain& getBrain();

	private:
	Brain *brain;
};

#endif