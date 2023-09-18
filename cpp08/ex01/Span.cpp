#include "Span.hpp"

Span::Span()
{
    this->size = 0;
}

Span::~Span() {}

Span::Span(unsigned int N)
{
    this->size = N;
}

std::vector<int> &Span::getVector()
{
    return (this->vec);
}

Span &Span::operator=(const Span & copy)
{
    this->size = copy.size;
    this->vec = copy.vec;
    return (*this);
}

void Span::addNumber(int number)
{
    if (this->size == vec.size())
        throw(Span::OutOfRange());
    this->vec.push_back(number);
    std::cout << "The element \033[1;92madded\033[0m to vector: " << number << std::endl;
}

int Span::shortestSpan()
{
    if (this->vec.size() <= 1)
        throw(Span::OutOfRange());

    std::vector<int> temp = this->vec;
    std::sort(temp.begin(), temp.end());

    int min = temp[1] - temp[0];
    
    for (size_t i = 2; i < temp.size(); i++)
    {
        int diff = temp[i] - temp[i - 1];
        
        if (diff < min)
            min = diff;
    }
    return(min);
}

// End: Listenin son elemanı
// Back: Listenin sonu
int Span::longestSpan()
{
    if (this->vec.size() <= 1)
        throw(NumberRange());
    std::vector<int> temp = this->vec;
    std::sort(temp.begin(), temp.end());
    return(temp.back() - temp.front());
}

const char *Span::OutOfRange::what() const throw()
{
    return ("vector size full");
}

const char *Span::NumberRange::what() const throw()
{
    return("Numbers exceed the limit");
}
