#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main ()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "Business");

    struct Student student2;
    student2.age = 20;
    student2.gpa = 2.5;
    strcpy(student2.name, "Pam");
    strcpy(student2.major, "Art");

    printf("%s's info: \n", student1.name);
    printf("Age: %d \n", student1.age);
    printf("GPA: %f \n", student1.gpa); 
    printf("Major: %s \n", student1.major);

    printf("%s's info: \n", student2.name);
    printf("Age: %d \n", student2.age);
    printf("GPA: %f \n", student2.gpa);
    printf("Major: %s \n", student2.major);

    return 0;
}