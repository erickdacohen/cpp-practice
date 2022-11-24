#include <iostream>
#include <cmath>

int main()
{
    float value_1 = 3.8;

    std::cout << "Value_1: " << value_1 << std::endl;
    // Ceiling and Floor rounding
    std::cout << "Ceiling function: " << std::ceil(value_1) << std::endl;
    std::cout << "Floor function: " << std::floor(value_1) << std::endl;

    // Absolute value
    std::cout << "Absolute value function: " << std::abs(value_1) << std::endl;

    // exponential e ^ x
    double expo = std::exp(10);
    std::cout << "Exponential. e ^ 10: " << expo << std::endl;

    // power
    std::cout << "2 to the 8th power: " << std::pow(2, 8) << std::endl;

    // log
    std::cout << "log10(1000) = " << std::log10(1000) << std::endl;

    return 0;
}