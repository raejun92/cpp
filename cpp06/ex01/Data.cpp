#include "Data.hpp"

Data::Data() {

}

Data::~Data() {

}

Data::Data(Data& reference) {
	*this = reference;
}

Data& Data::operator=(Data& reference) {
	return *this;
}

int Data::getValue() {
	return value;
}

void Data::setValue(int value) {
	this->value = value;
}

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}