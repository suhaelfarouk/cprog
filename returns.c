#include <stdlib.h>
#include <stdio.h>

double cube (double num);

int main ()
{
    printf("Answer: %f \n", cube(5.0));
    
    return 0;
}


double cube(double num)
{
    double result = num * num * num;
    return result;
}