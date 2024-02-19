#include "maxdefault.hpp"
#include <iostream>

int main() {
    // default value for return type
    std::cout << ::max(4, 7.2) << std::endl;
    // specifty return type explicitly
    // we need to specify all to be able to specify return type (its the last one)
    std::cout << ::max<double, int, long double>(5.4, 5) << std::endl;
    // default arguments leading
    std::cout << ::max3<int>(4, 42);
}