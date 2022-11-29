#include <iostream>

/*
It is SUPER IMPERATIVE to return memory you allocate.
When initializing a pointer to the heap, we MUST delete it
when finished. Use caution.
*/

int main()
{
    int *my_pointer = nullptr;
    my_pointer = new int;

    *my_pointer = 60;

    std::cout << "My pointer on the heap is: " << my_pointer << std::endl;
    std::cout << "My pointer points to: " << *my_pointer << std::endl;

    delete my_pointer;
    my_pointer = nullptr;

    std::cout << "------------\n"
              << std::endl;
    std::cout << "initializing pointer\n"
              << std::endl;

    // Memory allocation contains junk value on heap
    int *pointer_1 = new int;
    std::cout << "pointer_1: " << pointer_1 << std::endl;
    std::cout << "pointer_1 junk value: " << *pointer_1 << std::endl;

    delete pointer_1;
    pointer_1 = nullptr;

    return 0;
}