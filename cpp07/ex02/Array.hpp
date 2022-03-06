#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	public:
		Array();
		~Array() {
			delete[] array;
		}
		Array(unsigned int n) : n(n) {
			array = new T[n];
		}
		Array(Array &reference) : n(reference.n) {
			array = new T[n];
			for (unsigned int index = 0; index < n; index++) {
				array[index] = reference.array[index];
			}
		}
		Array& operator=(Array& reference) {
			if (this == &reference) {
				return *this;
			}
			if (n != reference.n) {
				if (array) {
					delete[] array;
				}
				n = reference.n;
				array = new T[n];
			}
			for (unsigned int index = 0; index < n; index++) {
				array[index] = reference.array[index];
			}
			return *this;
		}
		T& operator[](unsigned int index) {
			if (index >= n) {
				throw IndexErrorException();
			}
			return array[index];
		}
		unsigned int size() {
			return n;
		}
		class IndexErrorException : public std::runtime_error {
			public:
				IndexErrorException(std::string message="Index Error") : std::runtime_error(message) {}
		};
		
	private:
		T* array;
		unsigned int n; 
};

#endif