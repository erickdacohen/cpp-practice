#include <iostream>
using std::string;

int main()
{
    string user_name;
    std::cout << "What is your name? : ";
    std::cin >> user_name;
    std::cout << "\nHi, " << user_name << "!" << std::endl;
    return 0;
}