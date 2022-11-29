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

    std::cout << "Dynamically Allocated Arrays" << std::endl;

    float *example_array = new float[5];

    example_array[1] = 3.0;

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "Array Value: " << example_array[i] << std::endl;
        std::cout << "Array pointer: " << &example_array[i] << std::endl;
    }

    delete[] example_array;
    example_array = nullptr;
    return 0;
}