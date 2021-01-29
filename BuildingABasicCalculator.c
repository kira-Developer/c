#include <stdio.h>
#include <stdlib.h>

int main () {
    const double NUM1;
    const double NUM2;

    printf("Enter First Number :");
    scanf_s("%lf" , &NUM1);
    printf("Enter Second Number :");
    scanf_s("%lf" , &NUM2);
    printf("Answer: %f" , NUM1 + NUM2);

    return 0 ;
}