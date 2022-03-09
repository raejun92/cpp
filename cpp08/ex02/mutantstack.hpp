#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>{
	public:
		typedef typename MutantStack<T>::stack::container_type::iterator iterator;
		typedef typename MutantStack<T>::stack::container_type::const_iterator const_iterator;
		typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
		typedef typename MutantStack<T>::stack::container_type::const_reverse_iterator const_reverse_iterator;
		MutantStack() {}
		~MutantStack() {}
		MutantStack(const MutantStack &reference) {
			*this = reference;
		}
		MutantStack& operator=(const MutantStack &reference) {
			if (this == &reference) {
				return *this;
			}
			MutantStack<T>::stack::operator=(reference);
			return *this;
		}
		iterator begin() {
			return this->c.begin();
		}
		iterator end() {
			return this->c.end();
		}
		const_iterator cbegin() const {
			return this->c.cbegin();
		}
		const_iterator cend() const {
			return this->c.cend();
		}
		reverse_iterator rbegin() {
			return this->c.rbegin();
		}
		reverse_iterator rend() {
			return this->c.rend();
		}
		const_reverse_iterator crbegin() const {
			return this->c.crbegin();
		}
		const_reverse_iterator crend() const {
			return this->c.crend();
		}
};

#endif
