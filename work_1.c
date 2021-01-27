#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char *username = "kira";
    char *password = "57239900";
    char usernameInput[20];
    char passwordInput[20];
    printf("get username : ");
    scanf("%s", usernameInput);
    printf("get password : ");
    scanf("%s", passwordInput);


    if (*usernameInput == *username &&  *passwordInput == *password) 
    {
        printf("login success\n");
        return 0;
    }else
    {
        printf("login failed\n");
        return 1;
    }
}