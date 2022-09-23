#include <stdlib.h>
#include <stdio.h>

int main ()
{
    char line[255];
    FILE * fpointer = fopen("employees.txt", "r");
    // FILE * fpointer = fopen("employees.txt", "w");
    // FILE * fpointer = fopen("employees.txt", "a");
    
    // r = read
    // w = write
    // a = append

    fgets(line, 255, fpointer);
    printf("%s", line);
    fgets(line, 255, fpointer);
    printf("%s", line);
    fgets(line, 255, fpointer);
    printf("%s", line);
    fgets(line, 255, fpointer);
    printf("%s \n", line);

    // fprintf(fpointer, "Jim, Salesman \nPam, Receptionist \nOscar, Accounting");
    // fprintf(fpointer, "\nKelly, Customer Service");

    fclose(fpointer);

    return 0; 
}