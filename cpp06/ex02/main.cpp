#include "Base.hpp"

int main() {
	Base* base = generate();
	Base& base2 = *base;

	identify(base);
	identify(base2);

	return 0;
}