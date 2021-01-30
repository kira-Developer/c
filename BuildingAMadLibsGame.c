#include <stdio.h>
#include <stdlib.h>

int main () {
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];
    printf("Enter A Color: ");
    scanf("%s" , color);
    printf("Enter A plural-noun: ");
    scanf("%s" , pluralNoun);
    printf("Enter A celebrity: ");
    scanf("%s%s" , celebrityF ,celebrityL);
    printf("Roses Are %s\n" , color);
    printf("%s Are Blue\n" , pluralNoun);
    printf("I Love %s %s\n" ,celebrityF , celebrityL);

}