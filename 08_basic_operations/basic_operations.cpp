#include <iostream>

int main()
{
    // Initialize values
    float a = 5.0;
    float b = 10.0;

    std::cout << "a = 5.0 and b = 10.0" << std::endl;

    // Addition
    std::cout << "a + b = " << a + b << std::endl;
    // Subtraction
    std::cout << "a - b = " << a - b << std::endl;
    // Multiplication
    std::cout << "a * b = " << a * b << std::endl;
    // Division
    std::cout << "a / b = " << a / b << std::endl;

    // Modulus example
    int c = 6;
    int d = 11;
    std::cout << "Modulus operator only works with integers. So we will use c = 6 and d = 11 to find\nc % d = " << c % d << std::endl;

    return 0;
}