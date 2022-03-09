#include "easyfind.hpp"

int main() {
	try {
		std::vector<int> v;
		v.push_back(10);
		v.push_back(20);
		v.push_back(30);
		v.push_back(40);
		std::vector<int>::iterator iter;
		std::vector<int>::iterator iter2;

		iter = easyfind(v, 20);
		std::cout << *iter << std::endl;

		iter2 = easyfind(v, 50);
		std::cout << *iter << std::endl;

	} catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}