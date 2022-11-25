#include <iostream>

int main()
{
    /*
        Pointers are special variables that store
        addresses of variables.
    */

    // initialize variable
    int var_1 = 0;
    // initialize pointer using address of var_1
    int *p_var_1 = &var_1;

    std::cout << "var_1: " << var_1 << std::endl;
    std::cout << "p_var_1 address in memory: " << p_var_1 << std::endl;

    // Derefrencing a pointer. Read the value a pointer points to
    std::cout << "\nDereferencing a pointer" << std::endl;
    int var_2 = 10;
    int *p_var_2 = nullptr;
    p_var_2 = &var_2;

    std::cout
        << "p_var_2 (at "
        << p_var_2
        << ")is pointing to var_2 that has a value of: "
        << *p_var_2
        << std::endl;

    return 0;
}