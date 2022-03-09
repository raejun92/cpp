#include "span.hpp"

int main() {
	{
		try {
			Span sp = Span(5);
			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;

			Span sp2(5);
			std::vector<int>::iterator begin;
			std::vector<int>::iterator end;
			begin = sp.getVector().begin();
			end = sp.getVector().end();
			sp2.addNumber(begin, end);
			std::cout << sp2.shortestSpan() << std::endl;
			std::cout << sp2.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
		
	}
	{
		try {
			Span s = Span(10000);
			srand(time(NULL));
			for (int i = 0; i < 10000; i++) {
				s.addNumber(rand());
			}
			std::cout << s.shortestSpan() << std::endl;
			std::cout << s.longestSpan() << std::endl;
			s.addNumber(rand());
		} catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}

	}

	return 0;
}