#pragma once

#include <stdexcept>
#include <algorithm>
#include <iostream>

template <typename T>
void easyfind(T destiny, int source) {
    typename T::iterator iter = std::find(destiny.begin(), destiny.end(), source);
    if (iter != destiny.end() && source == *(destiny.end() - 1)) {
        std::cout << "value found in container" << std::endl;
    }
    else {
         throw std::runtime_error("Integer not found in container");
    }
   
}