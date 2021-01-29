#include <stdio.h>
#include <stdlib.h>

int main () {
    char name[] = "kira";
    printf("Hello World\n");
    printf("Hello\nWorld\n");
    printf("Hello\"World\"\n");
    printf("%d\n", 18);
    printf("My Favorite Number Is %d\n", 100);
    printf("My Favorite %s Is %d\n" ,"Number", 100);
    printf("My Favorite %s Is %f\n" ,"flot Number", 500.3234);
    printf("My Name is %s\n" , name);
}