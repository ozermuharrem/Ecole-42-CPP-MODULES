#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <string>
#include <cctype>
#include <iostream>
#include <cstdlib>
#include <climits>

class Converter
{
public:
    Converter();
    ~Converter();

    static void convert(std::string str);

    static void convertChar(char i);
    static void convertInt(int i);
    static void convertFloat(float i);
    static void convertDouble(double i);

    static void printFunc(char a, int b, float c, double d);
    static void pseudoPrinter(std::string str);
    static void impossiblePrinter();
};

#endif
