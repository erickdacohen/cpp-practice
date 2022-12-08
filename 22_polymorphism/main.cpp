#include <iostream>
using std::string;

// using similar code from previous lesson

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
    // make method called work. add virtual to see if derived has other implementations
    virtual void Work()
    {
        std::cout << Name << " is working hard!" << std::endl;
    }
    // define constructor
    Employee(string name, int age)
    {
        Name = name;
        Age = age;
    }
};

// define a child class
class Developer : public Employee
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

    void Work()
    {
        std::cout << Name << " is working hard writing " << FavProgrammingLang << " code." << std::endl;
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
    Employee emp = Employee("Nancy", 41);
    Developer dev = Developer("Jannet", 23, "C++");

    std::cout << "Regular use of method using the Work from the super class. (Virtual)" << std::endl;
    emp.Work();
    dev.Work();

    // create pointers to reference a child class object
    Employee *e = &dev;

    e->Work();

    return 0;
}