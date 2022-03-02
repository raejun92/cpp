#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	public:
	Brain();
	~Brain();
	Brain(const Brain&);
	Brain& operator=(const Brain&);
	std::string getIdea(int);
	void setIdea(int, std::string);

	private:
	std::string ideas[100];
};

#endif