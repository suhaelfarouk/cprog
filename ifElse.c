#include <stdlib.h>
#include <stdio.h>

int max(int num1, int num2, int num3);

int main ()
{
    printf("%d \n", max(1, 2, 3));
    printf("%d \n", max(3, 2, 1));

    return 0;
}

int max(int num1, int num2, int num3)
{
    int result;

    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }

    return result;
}