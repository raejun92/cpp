#include "Karen.hpp"

int main(int argc, char *argv[]) {
	Karen karen;

	if (argc != 2) {
		std::cout << "Probably complaining about insignificant problems\n";
		return (0);
	}
		
	
	karen.complain(argv[1]);
	

	return (0);
}