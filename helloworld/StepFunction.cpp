#include <cstdio>

int step_function(int x);

int main()
{
    int value1 = step_function(100);
    int value2 = step_function(0);
    int value3 = step_function(-10);
    printf("value 1: %d, value 2: %d, value 3: %d", value1, value2, value3);
}

int step_function(int x)
{
    int result = 0;
    if (x < 0)
    {
        return -1;
    }
    else if (x > 0)
    {
        result = 1;
    }
    return result;
}