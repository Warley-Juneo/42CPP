#pragma once

#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>

class Span
{
    public:
        Span(unsigned int n);
        ~Span();
        Span(Span const& src);
        Span &operator=(Span const& src);

        void    addNumber(int number);
        int     shortestSpan();
        int     longestSpan();
        int     verifyException(std::vector<int> _vector);

        unsigned int    getMaxLength() const;
        std::vector<int> getVector() const;
    private:
        unsigned int _maxLength;
        std::vector<int>    _vector;    
};

