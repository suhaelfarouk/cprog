#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int age;
    double gpa;
    char grade;
    char name[20];
    
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old \n", age);

    printf("Enter your grade: ");
    scanf(" %c", &grade);
    printf("Your grade is %c \n", grade);

    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f \n", gpa);

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is %s \n", name);
    
    return 0;
}