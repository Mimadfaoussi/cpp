# include "Span.hpp"


// Span::Span(){}

Span::Span(unsigned int N): N(N){}

Span::Span(const Span &other): N(other.N), _numbers(other._numbers) {}

Span::~Span(){}

unsigned int Span::getSize() const 
{
    return N;
}

Span& Span::operator=(cont Span &other)
{
    if (this != &other)
    {
        N = other.getSize();
        _numbers = other._numbers;
    }
    return (*this);
}


void    Span::addNumber(unsigned int nb)
{
    if (_numbers.size() >= N)
    {
        throw OutOfRangeException();
    }
    _numbers.push_back(nb);
}


