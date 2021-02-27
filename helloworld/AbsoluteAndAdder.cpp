#include <cstdio>

int absolute_value(int x)
{
    if (x >= 0)
        return x;
    else
        return x * -1;
}

int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int my_num = -10;
    int my_other_num = 40;
    printf("The absolute value of %d + %d is %d.\n", my_num, my_other_num, absolute_value(sum(my_num, my_other_num)));
}