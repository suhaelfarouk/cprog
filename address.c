#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int age = 40;
    double gpa = 3.4;
    char grade = 'A';
    
    printf("age's memory address: %p \n", &age);
    printf("gpa's memory address: %p \n", &gpa);
    printf("grade's memory address: %p \n", &grade);

    return 0;
}