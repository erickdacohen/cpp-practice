#include <iostream>

int main()
{
    // makes boolean print true | false instead of 1 | 0
    std::cout << std::boolalpha;
    // define boolean value
    bool my_bool = true;
    std::cout << "My bool: " << my_bool << std::endl;

    if (my_bool)
    {
        std::cout << "Nice!" << std::endl;
        return 0;
    }
    else
    {
        std::cerr << my_bool << ":( " << std::endl;
        return 1;
    }
}