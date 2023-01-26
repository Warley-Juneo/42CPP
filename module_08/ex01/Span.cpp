#include "Span.hpp"

Span::Span(unsigned int n) : _maxLength(n) {
    std::cout << "Default span constructor called" << std::endl;
}

Span::Span(Span const& src) {
    std::cout << "Copy span constructor called" << std::endl;
    *this = src;
}

Span &Span::operator=(Span const& src) {
    if (this != &src) {
        this->_maxLength = src.getMaxLength(); 
        this->_vector = src.getVector();
    }
    return *this;
}

unsigned int    Span::getMaxLength() const {
    return (this->_maxLength);
}

std::vector<int>    Span::getVector() const {
    return (this->_vector);
}

void Span::addNumber(int number) {
    try {
        if (_vector.size() >= _maxLength) {
            throw std::out_of_range("impossible to add.");
        } else {
            _vector.push_back(number);
        }
    } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
}

int    Span::verifyException(std::vector<int> _vector) {
    try {
        if (_vector.size() < 2) {
            throw std::length_error("vector must be greater than 1");
        }
        else {
            return (1);
        }
    } catch(std::exception &e) {
         std::cout << e.what() << std::endl;
    }
}

int Span::shortestSpan() {
    int diff;
    int min_diff;
    std::vector<int>::iterator   it;

    if (verifyException(_vector)) {
        std::sort(_vector.begin(), _vector.end());
        min_diff = _vector.back() - _vector.front();
        for(it = _vector.begin(); it <= _vector.end() - 2; ++it) {
           diff = *(it + 1) - *it;
            if (diff < min_diff) {
            min_diff = diff;
            }
        }
        return (min_diff);
    }
    return (0);
}

int Span::longestSpan() {
    if (verifyException(_vector)) {
        std::sort(_vector.begin(), _vector.end());
        return (_vector.back() - _vector.front());
    }
    return (0);
}

Span::~Span() {
    std::cout << "Default span destructor called" << std::endl;
}