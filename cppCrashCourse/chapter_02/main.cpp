#include <cstdio>
#include <iostream>

int main()
{
    // types & representations
    int x = 0b10;
    printf("This is my val in binary x: %d\n", x);

    short y = 101;
    printf("y is short: %hd\n", y);

    // chars
    char myGrade = 'A';
    printf("This was my grade: %c\n", myGrade);

    // booleans
    bool myBool = true;
    printf("%d", myBool);

    // arrays
    int myExampleArray[10];
    int myArray2[] = {0, 1, 3, 5, 8};
    printf("This is the third element in my array: %d\n", myArray2[2]);

    // loop and print array
    for (int i; i < 5; i++)
    {
        std::cout << myArray2[i] << std::endl;
    }

    int j;
    while (j < 1e2)
    {
        std::cout << j << std::endl;
        j++;
    }

    // get the size of an array using `sizeof()`
    short AnotherArray[] = {1, 3, 4, 5, 7, 9, 13, 14};
    size_t n_elements = sizeof(AnotherArray) / sizeof(short);
    printf("The size of my array is %lu", n_elements);

    // String literals
    char english[] = "A book holds a house of gold.";

    std::cout << english << std::endl;

    // Classes
    struct Book
    {
        char name[256];
        int year;
        int pages;
        bool hardcover;
    };

    Book CrashCourseCpp;
    CrashCourseCpp.year = 2023;
    CrashCourseCpp.hardcover = false;

    std::cout << CrashCourseCpp.hardcover << CrashCourseCpp.year << std::endl;

    // C++ classes with methods
    struct RocketShip
    {
        bool ignition;
        int left;
        int right;
        void goLeft()
        {
            left++;
        };
        void goRight()
        {
            right++;
        };
    };

    RocketShip MyRocket;
    MyRocket.ignition = true;
    MyRocket.goLeft();
    MyRocket.goLeft();
    MyRocket.goRight();
    MyRocket.goLeft();
    MyRocket.goLeft();

    std::cout << MyRocket.left << std::endl;
    std::cout << MyRocket.right << std::endl;

    // Classes
    class User
    {
        char username[32];

    public:
        int years;
        void setYears(int y)
        {
            years = y;
        };

        int getYears()
        {
            return years;
        };
    };

    User NewUser;
    NewUser.setYears(2);
    std::cout << NewUser.getYears() << std::endl;

    return 0;
};