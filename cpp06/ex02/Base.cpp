#include "Base.hpp"

Base::~Base() {

}

Base * generate(void) {
	std::srand(std::time(NULL));
	int random = std::rand() % 3;
	Base *ptr;
	switch (random)
	{
	case 0:
		ptr = new A();
		break;
	case 1:
		ptr = new B();
		break;
	case 2:
		ptr = new C();
		break;
	}
	return ptr;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A !\n";
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B !\n";
	} else if (dynamic_cast<C*>(p)){
		std::cout << "C !\n";
	}
}

void identify(Base& p) {
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "A !\n";
	} catch (std::exception &e) {
		
	}
	try {
		B b = dynamic_cast<B&>(p);
		std::cout << "B !\n";
	} catch (std::exception &e) {

	}
	try {
		C c = dynamic_cast<C&>(p);
		std::cout << "C !\n";
	} catch (std::exception &e) {

	}
}