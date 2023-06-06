#include <cstdio>

// 1-1 create a function called `absolute value`
// that returns the absolute value of the single
// argument
int absolute_value(int x)
{
    if (x > 0)
    {
        return x;
    }
    else
    {
        return x * -1;
    }
};

int sum(int val_1, int val_2)
{
    return val_1 + val_2;
};

int main()
{
    int my_num = -10;
    int my_other_num = 40;
    printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
    printf("The absolute value of %d is %d.\n", my_other_num, absolute_value(my_other_num));
    printf("Sum of vals: %d", sum(my_num, my_other_num));
};