#include "include/fraction.h"
#include <iostream>


int main(int argc, char const *argv[])
{
    std::cout << "Hello World!" << std::endl;

    fraction f1(1, 2), f2(18, 4), f3;

    // f3 = f1 + f2;
    // fraction f4 = f3 + 1;
    // fraction f5 = 3 + f1;
    std::cout << f2;
    // std::cout << f3;
    // std::cout << f4;
    // std::cout << f5;

    // std::cout << fraction::gcf(14, 7) << std::endl;
    // std::cout << fraction::getWholeNumber(14, 3) << std::endl;
    return 0;
}
