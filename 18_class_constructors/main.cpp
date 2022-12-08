#include <iostream>
using std::string;

// make a new car class
class Car
{
public:
    string Manufacturer;
    string Model;
    int Year;

    // define method to start the car
    void Start()
    {
        std::cout << "vrrooom vrroom" << std::endl;
    }

    // define new constructor
    Car(string manufacturer, string model, int year)
    {
        Manufacturer = manufacturer;
        Model = model;
        Year = year;
    }
};

int main()
{
    // construct the class using the defined constructor above
    Car my_first_car = Car("Mazda", "Protoge", 2003);
    std::cout << "My first car was a " << my_first_car.Manufacturer << " " << my_first_car.Model << " from the year " << my_first_car.Year << std::endl;
    my_first_car.Start();
    return 0;
}