#include "span.hpp"

Span::Span() : n(0) {
}

Span::~Span() {

}

Span::Span(unsigned int n) : n(n) {
}

Span::Span(const Span &reference) {
	*this = reference;
}

Span& Span::operator=(const Span &reference) {
	if (this != &reference) {
		v = reference.v;
		n = reference.n;
	}
	return *this;
}

void Span::addNumber(int number) {
	if (this->n <= v.size()) {
		throw NotAddException();
	}
	v.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (begin >= end) {
		throw NotAddException();
	}
	while (begin != end) {
		v.push_back(*begin++);
	}
}

long Span::shortestSpan() {
	if (v.size() <= 1) {
		throw NoCompareException();
	}
	std::vector<int> copy(v);
	std::vector<int> span;
	std::sort(copy.begin(), copy.end());
	for (size_t i = 0; i < copy.size() - 1; i++) {
		span.push_back(copy[i+1] - copy[i]);
	}
	return *(std::min_element(span.begin(), span.end()));
}

long Span::longestSpan() {
	if (v.size() <= 1) {
		throw NoCompareException();
	}
	return *(std::max_element(v.begin(), v.end())) - 
	*(std::min_element(v.begin(), v.end()));
}

std::vector<int>& Span::getVector() {
	return v;
}