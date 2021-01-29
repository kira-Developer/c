#include <stdio.h>
#include <string.h>
int main ()
{
    int age;
    char name[20];
    printf("Enter Your Name:");
    fgets(name , 20 , stdin);
    printf("Enter Your Age: ");
    scanf("%d" , &age);
    strtok(name , "\n");
    printf("Your Name is %s And You Are %d Years old",name, age);
    return 0;
}