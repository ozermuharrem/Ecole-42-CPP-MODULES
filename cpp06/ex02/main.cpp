#include "Base.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if (argc != 1)
    {
        std::cerr << "Error!" << std::endl;
        return(-1);
    }
    Base *ptr;

    ptr = generate();
    
    std::cout << "Base pointer: " << ptr << std::endl;

    identify(ptr);

    identify(*ptr);

    delete ptr;
}
