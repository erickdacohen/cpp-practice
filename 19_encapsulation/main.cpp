#include <iostream>
using std::string;

/*
The goal of encapsulation is to make sure that class
attributes are not directly accessable. Instead, we
make them private and access them through methods.
*/

class Person
{
private:
    string Name;
    string BirthPlace;
    int BirthYear;

public:
    // setter
    void setName(string name)
    {
        Name = name;
    }
    // getter
    string getName()
    {
        return Name;
    }

    // setter - BirthPlace
    void setBirthPlace(string birth_place)
    {
        BirthPlace = birth_place;
    }
    // getter - BirthPlace
    string getBirthPlace()
    {
        return BirthPlace;
    }

    // setter - BirthYear
    void setBirthYear(int year)
    {
        BirthYear = year;
    }

    // getter - BirthYear
    int getBirthYear()
    {
        return BirthYear;
    }

    // define custom constructor
    Person(string name, string birth_place, int birth_year)
    {
        Name = name;
        BirthPlace = birth_place;
        BirthYear = birth_year;
    };
};

int main()
{
    // define person
    Person person_a = Person("Andy", "Georgia", 1985);
    std::cout << person_a.getName() << " was born in " << person_a.getBirthYear() << " in " << person_a.getBirthPlace() << std::endl;

    // Now we will update using the setter to change
    person_a.setBirthPlace("Morocco");

    std::cout << "Just kidding. We changed " << person_a.getName() << "'s birthplace to " << person_a.getBirthPlace() << std::endl;

    return 0;
}