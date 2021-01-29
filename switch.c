#include <stdio.h>
#include <stdlib.h>

int main()
{
char c;
printf("C:");
scanf_s("%c",&c);
switch(c)
{
    case 'A':
        printf("A");
        break;
    case 'B':
        printf("B");
        break;
    case 'C':
        printf("C");
        break;
    case 'D':
        printf("D");
        break;
    default:
        printf("None");
        break;
}
return 0;
}
