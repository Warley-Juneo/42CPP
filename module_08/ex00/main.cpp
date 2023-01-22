#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main () {
    typedef std::vector<int>    ints_t;

    int     v[] = {5, 10, 15, 20, 25, 30};
    int     sizev = (sizeof(v) / sizeof(v[0]));
    ints_t  myVector(v, v + sizev);

    try {
        easyfind(myVector, 30);
    } catch (std::exception &e) {
        std::cout <<e.what() << std::endl;
    }
}