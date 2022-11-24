#include <iostream>

int addNumbers(int first_number, int second_number)
{
    int sum = first_number + second_number;
    return sum;
}

int main()
{
    int first_number = 10;
    int second_number = 13;

    int sum = addNumbers(first_number, second_number);

    std::cout << "The sum is: " << sum << std::endl;
    std::cout << addNumbers(99, -9) << std::endl;
    return 0;
}