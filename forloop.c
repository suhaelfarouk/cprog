#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int luckyNums[] = {4, 8, 15, 16, 23, 42};

    int i;
    for (i = 0; i < 6; i++)
    {
        printf("%d \n", luckyNums[i]);
    }
    
    return 0;
}