#include <iostream>

int main()
{
    // Characters encoded with ASCII 65 is A
    char my_char = 65;
    std::cout << my_char << std::endl;

    // Can use static_cast to change the type
    std::cout << static_cast<int>(my_char) << std::endl;

    char character_1 = 'H';
    char character_2 = 'e';
    char character_3 = 'l';
    char character_4 = 'l';
    char character_5 = 'o';
    
    std::cout << character_1 << character_2 << character_3 << character_4 << character_5 << std::endl;

    return 0;
}