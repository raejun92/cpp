#include "Data.hpp"

int main() {
	Data *a = new Data();

	a->setValue(10);
	std::cout << "a: " << a << std::endl;
	std::cout << "a: " << a->getValue() << std::endl;

	uintptr_t u = serialize(a);
	std::cout << "u: " << std::hex << u << std::endl;

	Data *b = deserialize(u);
	std::cout << "b: " << b << std::endl;
	std::cout << "b: " << b->getValue() << std::endl;

	return 0;
}