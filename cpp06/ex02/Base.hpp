#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

class Base
{
public:
    virtual ~Base()
    {
        std::cout << "Base destructor has been called" << std::endl;
    };
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

#endif

Base *generate(void);
void identify(Base *p);
void identify(Base &p);
