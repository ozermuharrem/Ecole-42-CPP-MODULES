#include "Span.hpp"

int main()
{
    try
    {
        Span span(5);
        span.addNumber(6);
        span.addNumber(3);
        span.addNumber(17);
        span.addNumber(9);
        span.addNumber(11);
        // span.addNumber(53); // catch'e girer
        std::cout << "minimum difference: " << span.shortestSpan() << std::endl;
        std::cout << "maximum difference: " << span.longestSpan() << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
