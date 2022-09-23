#include <stdlib.h>
#include <stdio.h>

int main ()
{
    char color[20];
    char pluralNoun[20];
    char nameF[20];
    char nameL[20];

    printf("Enter a color: ");
    scanf("%s", color);

    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);

    printf("Enter a celebrity: ");
    scanf("%s%s", nameF, nameL);

    printf("Roses are %s \n", color);
    printf("%s are blue \n", pluralNoun);
    printf("I love %s %s \n", nameF, nameL);

    return 0;
}