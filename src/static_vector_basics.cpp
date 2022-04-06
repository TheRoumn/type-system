#include <iostream>
#include "units.h"



int main()
{
    using v = static_vector<4, 3, 2, 1, 0>;

    std::cout << at<v, 0>::value << std::endl;
    std::cout << at<v, 1>::value << std::endl;
    std::cout << at<v, 2>::value << std::endl;
    std::cout << at<v, 3>::value << std::endl;
    std::cout << at<v, 4>::value << std::endl;
}
