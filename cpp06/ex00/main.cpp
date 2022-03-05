#include "Converter.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "Invalid format\n";
		return 0;
	}
	Converter converter(argv[1]);
	converter.runConvert();
	return 0;
}