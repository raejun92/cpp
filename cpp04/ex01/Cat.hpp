#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
	Cat();
	~Cat();
	Cat(const Cat&);
	Cat& operator=(const Cat&);
	virtual void makeSound() const;
	Brain& getBrain();
	
	private:
	Brain *brain;
};

#endif