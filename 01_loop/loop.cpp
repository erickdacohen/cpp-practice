#include <iostream>

int main()
{
    for (size_t i = 0; i <= 10; i++)
    {
        std::cout << "i is: " << i << std::endl;
    }

    std::cout << "\n---------------------\nwhile loops" << std::endl;

    size_t COUNT = 20;
    size_t i = 0;
    while (i < COUNT)
    {
        std::cout << i << ". I love C++" << std::endl;
        ++i;
    }

    std::cout << "\n---------------------\ndo while loops\n"
              << std::endl;

    size_t j = 21;
    do
    {
        std::cout << "drink" << std::endl;
        ++j;
    } while (j < COUNT);

    return 0;
}