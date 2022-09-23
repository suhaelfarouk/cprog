#include <stdlib.h>
#include <stdio.h>

void sayHi (char name[], int age) {
    printf("Hello %s, you are %d \n", name, age);
}

int main ()
{
    sayHi("Mike", 35);
    sayHi("Steve", 30);
    sayHi("Tom", 40);
    
    return 0;
}

