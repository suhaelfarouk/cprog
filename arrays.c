#include <stdlib.h>
#include <stdio.h>

int main ()
{

    int luckyNums[] = {4, 8, 15, 16, 23, 42};
    luckyNums[0] = 90;
    printf("%d \n", luckyNums[0]);

    int luckyNums2[20];
    luckyNums2[0] = 100;
    printf("%d \n", luckyNums2[0]);

    return 0;
}