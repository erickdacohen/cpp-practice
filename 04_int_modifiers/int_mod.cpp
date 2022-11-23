#include <iostream>

int main()
{
    /*
        values that can be + or - are signed. Limit is ~ 2 billion.
        The following would give us warnings and garbage values
        signed int value_1 = 3000000000;  
    */

   signed int value_1 = 10;
   unsigned int value_2 = 22;

   std::cout << "Value 1: " << value_1 << std::endl;
   std::cout << "Value 1 size is: " << sizeof(value_1) << std::endl;
   std::cout << "Value 2: " << value_2 << std::endl;
   std::cout << "Value 2 size is: " << sizeof(value_2) << std::endl;
   
// Short and long values are also possible 
    short int value_3 = 5;
    std::cout << "Value 3: " << value_3 << std::endl;
    std::cout << "Value 3 size is: " << sizeof(value_3) << std::endl;

    long int value_4 = 400;
    std::cout << "Value 4: " << value_4 << std::endl;
    std::cout << "Value 4 size is: " << sizeof(value_4) << std::endl;

   return 0;
}