#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 18;
    double gpa = 3.4;
    char grade = 'A';
    printf("age: %p\ngpa: %p\n grade %p\n", &age , &gpa , &grade);
    return 0;
}