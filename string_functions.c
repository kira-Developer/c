#include <stdio.h>
#include <stdlib.h>
int main() {
    char email[100] = "ab@gmail.com";
    char spclechar = '@';
    char *result;
    result = memchr(email,spclechar,strlen(email));
    printf("%s\n" , result);


    return 0;
}

