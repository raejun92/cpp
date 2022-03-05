#include "iter.hpp"

int main( void ) {
	int a[5] = {10, 2, 14, -1, 598};
	iter(a, 5, print_iter);
	std::cout << std::endl;

	char b[3] = {'b', '1', 't'};
	iter(b, 3, print_iter);
	std::cout << std::endl;

	std::string c[2] = {"hello", "world"};
	iter(c, 2, print_iter);

	return 0;
}