#pragma once

#include <iostream>

template <typename T>
void iter(T *arry, int length, void(*print_func)(T &)){
    int i = 0;
    while(i < length)
    {
        print_func(arry[i]);
        i++;
    }
}

template <typename T>
void print_func(T &str){
    std::cout<<str << std::endl;
}