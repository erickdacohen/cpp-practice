#include <iostream>
using std::string;

/*
Making an abstract class that must be acounted
for when making a class that has the abstraction.
See example below
*/

// First we will make the abstract class that will require handling
class AbstractLunch
{
    virtual void isLunchReady() = 0;
};

class Lunch : AbstractLunch
{
private:
    int Hour;
    string Menu;

public:
    // getters and setters
    void setHour(int hour)
    {
        Hour = hour;
    }
    int getHour()
    {
        return Hour;
    }
    void setMenu(string menu)
    {
        Menu = menu;
    }
    string getMenu()
    {
        return Menu;
    }
    // constructor
    Lunch(int hour, string menu)
    {
        Hour = hour;
        Menu = menu;
    };

    // handle abstract class function
    void isLunchReady()
    {
        if (Hour < 12)
            std::cout << "Lunch is NOT ready" << std::endl;
        else
            std::cout << "Lunch is ready!"
                      << " We will have " << Menu << std::endl;
    }
};

int main()
{
    Lunch todays_lunch = Lunch(13, "Mac & Cheese");
    todays_lunch.isLunchReady();
    return 0;
}