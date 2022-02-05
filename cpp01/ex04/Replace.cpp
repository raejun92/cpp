#include "Replace.hpp"

Replace::Replace(std::string fileName, std::string s1, std::string s2) {
	this->fileName = fileName;
	this->s1 = s1;
	this->s2 = s2;
}

void Replace::change(std::ifstream& readFile, std::ofstream& writeFile) {
	std::string tmp;

	while (!readFile.eof()) {
		getline(readFile, tmp);
		int findIndex = tmp.find(s1);
		while (findIndex != -1) {
			std::string newLine = tmp.substr(0, findIndex) + s2 + tmp.substr(findIndex + s1.length());
			
			tmp = newLine;
			findIndex = tmp.find(s1);
		}
		writeFile << tmp + '\n';
	}
}