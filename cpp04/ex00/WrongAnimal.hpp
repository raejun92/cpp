#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(std::string);
	WrongAnimal(const WrongAnimal&);
	WrongAnimal& operator=(const WrongAnimal&);
	void makeSound() const;
	std::string getType() const;

	protected:
	std::string type;
};

#endif