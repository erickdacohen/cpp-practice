#include <iostream>
using std::string;

class Person
{
public:
    string Name;
    string City;
    int Age;

    // make a method
    void Intro()
    {
        std::cout << "Hello, my name is " << Name << std::endl;
        std::cout << "I live in  " << City << std::endl;
        std::cout << "I am  " << Age << " years old" << std::endl;
    }
};
int main()
{
    Person person_1;
    person_1.Name = "Erick";
    person_1.City = "Washington";
    person_1.Age = 25;
    person_1.Intro();

    Person person_2;
    person_2.Name = "Sam";
    person_2.City = "Miami";
    person_2.Age = 34;
    person_2.Intro();

    return 0;
};