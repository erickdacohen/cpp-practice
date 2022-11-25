#include <iostream>

int main()
{
    // Declare an array of integers with size 5
    int my_array[5];

    my_array[0] = 90;
    my_array[1] = 95;
    my_array[2] = 87;

    // reading values
    std::cout << my_array[0] << std::endl;

    // Declaring at initialization
    std::cout << "Decalre at initialization" << std::endl;

    int scores[] = {10, 8, 9};

    for (size_t i = 0; i < 3; i++)
    {
        std::cout << scores[i] << std::endl;
    }

    int my_array_2[5] = {3, 4};
    for (size_t k = 0; k < 6; k++)
    {
        std::cout << "Junk data value: " << my_array_2[k] << std::endl;
    }

    std::cout << "\nGet the size of the array\n"
              << std::endl;

    int my_array_3[4];
    std::cout << "Array size (4 ints): " << sizeof(my_array_3) << std::endl;
    std::cout << "Size of one int: " << sizeof(my_array_3[0]) << std::endl;
    std::cout << "So number of elemnts in array can be calculated by array length / length of one item: " << sizeof(my_array_3) / sizeof(my_array_3[0]) << std::endl;

    char message_1[] = {'H', 'i', '!', '\0'};
    std::cout << message_1 << std::endl;

    // string literals. Single and double quotes are different!
    char message_2[] = {"Hello"};
    std::cout << message_2 << std::endl;

    return 0;
}