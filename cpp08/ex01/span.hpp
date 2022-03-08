#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
	public:
		Span();
		~Span();
		Span(unsigned int n);
		Span(const Span &reference);
		Span& operator=(const Span &reference);
		void addNumber(int number);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		class NotAddException : public std::runtime_error {
		public:
			NotAddException(std::string message="Not add number") : std::runtime_error(message) {}
		};
		long shortestSpan();
		long longestSpan();
		class NoCompareException : public std::runtime_error {
		public:
			NoCompareException(std::string message="There's no one to compare") : std::runtime_error(message) {}
		};
	private:
		std::vector<int> v;
		unsigned int n;
};

#endif