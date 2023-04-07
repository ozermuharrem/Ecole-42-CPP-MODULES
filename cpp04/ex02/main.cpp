#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main(){
    Animal *a = new Cat;

    std::cout << "|-----------------------------------------|" << std::endl;

    std::cout << a->getType() << std::endl;
    a->makeSound();

    std::cout << "|-----------------------------------------|" << std::endl;


    delete a;
    return (0);
}