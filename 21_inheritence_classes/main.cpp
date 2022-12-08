#include <iostream>
using std::string;

// define super class
class Employee
{
private:
    int Age;

protected:
    string Name;

public:
    // setters and getters
    void setName(string name)
    {
        Name = name;
    }
    void setAge(int age)
    {
        Age = age;
    }
    string getName()
    {
        return Name;
    }
    int getAge()
    {
        return Age;
    }
    // define constructor
    Employee(string name, int age)
    {
        Name = name;
        Age = age;
    }
};

// define a child class
class Developer : Employee
{
private:
    string FavProgrammingLang;

public:
    void setFavProgrammingLang(string fav_programming_lang)
    {
        FavProgrammingLang = fav_programming_lang;
    }
    string getFavProgrammingLang()
    {
        return FavProgrammingLang;
    }
    // method
    void WriteCode()
    {
        // can use 'Name' instead of getName() since Name is protected not private
        std::cout << Name << " is writing code in " << FavProgrammingLang << std::endl;
    }

    // constructor; use what we defined in parnet class
    Developer(string name, int age, string fav_programming_lang) : Employee(name, age)
    {
        FavProgrammingLang = fav_programming_lang;
    }
};

int main()
{
    // define new developer object
    Developer dev = Developer("Jannet", 23, "C++");
    Developer dev_2 = Developer("Daniel", 33, "JavaScript");
    dev.WriteCode();
    dev_2.WriteCode();
    return 0;
}