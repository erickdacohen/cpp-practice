#include <iostream>

int main()
{
    int var_1 = 10;

    int &var_1_ref = var_1;

    std::cout << "var_1 value: " << var_1 << std::endl;
    std::cout << "var_1_ref value: " << var_1_ref << std::endl;
    std::cout << "var_1 location: " << &var_1 << std::endl;
    std::cout << "var_1_ref location: " << &var_1_ref << std::endl;

    // notice that the ref points to the same location.
    // Therefore, a change in one will change the other.

    std::cout << "------------------" << std::endl;

    var_1 = 5;

    std::cout << "var_1 value: " << var_1 << std::endl;
    std::cout << "var_1_ref value: " << var_1_ref << std::endl;
    std::cout << "var_1 location: " << &var_1 << std::endl;
    std::cout << "var_1_ref location: " << &var_1_ref << std::endl;

    return 0;
}