#include <iostream>
/*
If-else statements are basic, so I will not spend
much time covering those. Will look into switch
statements, ternary operators and other more advanced
C++ related syntax
 */
int val_1 = 0;
int val_2 = 1;

int main()
{
    int val = val_1;
    switch (val)
    {
    case 0:
    {
        std::cout << "Val_1 " << val_1 << std::endl;
    }
    break;

    case 1:
    {
        std::cout << "Val_2 " << val_2 << std::endl;
    }
    break;

    default:
        break;
    }

    std::cout << "\n\n-------------------\n\n"
              << std::endl;

    std::cout << "Ternary Operator" << std::endl;

    const int a = 5;
    const int b = 6;

    std::cout << std::boolalpha;
    bool result = (a > b) ? true : false;
    std::cout << "a is greater than b: " << result << std::endl;

    return 0;
}