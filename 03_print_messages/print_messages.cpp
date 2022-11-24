#include <iostream>
#include <string>

int main()
{
    // Initialize variables
    // int age;
    // std::string name;

    // // Prompt user for input
    // std::cout << "What is your name? " << std::endl;
    // std::cin >> name;

    // std::cout << "How old are you? " << std::endl;
    // std::cin >> age;

    // Print bytes using sizeof()

    int rand_num = 10;
    std::cout << "The size of the int variable is: " << sizeof(rand_num) << std::endl;

    std::cout << "Enter where you are from: " << std::endl;
    std::string city;
    std::getline(std::cin, city);

    // std::cout << "Hello " << name << ". You are " << age << " years old." << std::endl;
    std::cout << "You are from " << city << std::endl;

    return 0;
}