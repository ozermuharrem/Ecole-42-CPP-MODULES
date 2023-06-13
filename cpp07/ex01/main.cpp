#include "iter.hpp"

int main(){
    int foo[4] = {33, 22, 11, 55};
    iter(foo, 4, print_func);

    std::string foo2[4] = {"I", "You", "We", "They"};
    iter(foo2, 4, print_func);
}