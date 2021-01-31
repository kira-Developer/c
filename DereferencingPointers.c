#include <stdio.h>
#include <stdlib.h>
int main() {
    int age = 18;
    int* pAge = &age;
    printf("%d" , *pAge);
    return 0;
}