#include <iostream>
#include <string>

int main()
{
    char my_char = 'G';
    std::cout << "My char value: " << my_char << std::endl;
    std::cout << std::boolalpha;
    std::cout << "My char is alphanumeric: " << std::isalnum(my_char) << std::endl;

    // Can use testing conditions
    my_char = '&';
    if (std::isalnum(my_char))
    {
        std::cout << my_char << " is alphanumeric. " << std::endl;
    }
    else
    {
        std::cout << my_char << " is not alphanumeric. " << std::endl;
    }

    // Check if a character is alphabetic i.e. a letter a-z
    std::cout << "----------------------" << std::endl;
    std::cout << "Check if alphabetic character." << std::endl;
    my_char = 'n';
    std::cout << "my_char is alphabetic: " << std::isalpha(my_char) << std::endl;

    // length of C strings
    std::cout << "Get length of strings" << std::endl;
    char my_message[] = "The sky is blue";

    std::cout << "\nmy message: " << my_message << std::endl;
    std::cout << "length of my message: " << std::strlen(my_message) << std::endl;
    std::cout << "Size of my message (with null char at the end): " << sizeof(my_message) << std::endl;

    // find last occurance of a character in a string
    std::cout << "\nLast occurance of a character in a string." << std::endl;
    char path[] = "c://user/home/example.cpp";

    char *target = std::strrchr(path, '/');
    std::cout << "target: " << target << std::endl;

    // finding str characters one-by-one using pointers
    std::cout << "\nFinding chars one-by-one" << std::endl;

    const char *my_string = "Try not. Do, or do not. There is no try.";
    char my_str_target = 'T';
    // another pointer to my string. Don't change my string cause then you lose it!
    const char *res_pointer = my_string;

    std::cout << "My string: " << my_string << std::endl;
    std::cout << "My target: " << my_str_target << std::endl;

    size_t itterations = 0;

    while ((res_pointer = std::strchr(res_pointer, my_str_target)) != nullptr)
    {
        std::cout << "found " << my_str_target << " starting at " << res_pointer << std::endl;

        res_pointer++;
        itterations++;
    };

    std::cout << "itterations: " << itterations << std::endl;
    std::cout << "Using std::string library:\n"
              << std::endl;

    std::string message = "This is my message.";

    std::cout << message << std::endl;

    return 0;
}