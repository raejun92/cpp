#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <iostream>
#include <fstream>

class Replace {
	private:
	std::string fileName;
	std::string s1;
	std::string s2;
	public:
	Replace(std::string, std::string, std::string);
	void change(std::ifstream&, std::ofstream&);
};

#endif