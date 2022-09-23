#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int age = 40;
    int * pAge = &age;
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("age's memory address: %p \n", pAge);
    printf("gpa's memory address: %p \n", pGpa);
    printf("grade's memory address: %p \n", pGrade);

    printf("age's value: %d \n", *pAge);
    printf("gpa's value: %f \n", *pGpa);
    printf("grade's value: %c \n", *pGrade);
    
    printf("age's memory address: %p \n", &age);
    printf("gpa's memory address: %p \n", &gpa);
    printf("grade's memory address: %p \n", &grade);

    printf("age's value: %d \n", age);
    printf("gpa's value: %f \n", gpa);
    printf("grade's value: %c \n", grade);

    return 0;
}