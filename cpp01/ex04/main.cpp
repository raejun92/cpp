#include "Replace.hpp"

int main() {
	std::string fileName;
	std::string s1;
	std::string s2;

	std::cout << "Please input file name: ";
	std::cin >> fileName;
	std::ifstream readFile(fileName);
	if (readFile.fail()) {
		std::cout << "파일 찾을 수 없음\n";
		return (0);
	}
	std::cout << "Put a value that will change: ";
	std::cin >> s1;
	std::cout << "Put the value want to change: ";
	std::cin >> s2;

	std::ofstream writeFile(fileName + ".replace");
	Replace replace(fileName, s1, s2);

	replace.change(readFile, writeFile);

	writeFile.close();
	readFile.close();
	return (0);
}