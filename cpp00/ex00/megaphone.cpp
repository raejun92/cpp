#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
	int i = 0;
	int j;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else {
		while (++i < argc) {
			j = -1;
			while (argv[i][++j] != '\0') {
				std::cout << (char)toupper(argv[i][j]);
			}
		}
	}
	std::cout << std::endl;
	return (0);
}