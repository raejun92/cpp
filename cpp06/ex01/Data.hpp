#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <cstdint>

class Data {
	public:
		Data();
		~Data();
		Data(Data& reference);
		Data& operator=(Data& reference);
		int getValue();
		void setValue(int value);
	
	private:
	int value;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif