#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {
			std::cout << "MutantStack default constructor called" << std::endl;
		};
		MutantStack(MutantStack const& src) {};
		MutantStack &operator=(MutantStack const& src) {};
		~MutantStack() {};

	typedef	typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return ( this->c.begin() ); };
	iterator end() { return ( this->c.end() ); };

	typedef typename std::stack<T>::container_type::iterator reverse_iterator;
	iterator cbegin() { return ( this->c.rbegin()); };
	iterator cend() { return ( this->c.rbegin()); };
};

