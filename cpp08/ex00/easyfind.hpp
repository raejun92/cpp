#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

class NotFoundException : public std::runtime_error {
	public:
		NotFoundException(std::string message="Not found") : std::runtime_error(message) {}
};

template <typename T>
typename T::iterator easyfind(T container, int findValue) {
	typename T::iterator it = std::find(container.begin(), container.end(), findValue);
	if (it == container.end()) {
		throw NotFoundException();
	}
	return it;
}

#endif