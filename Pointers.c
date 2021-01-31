
#include <stdio.h>

int main()
{
    int age = 18;
    int* pAge =&age;
    double gpa = 3.4;
    double* pGpa = &gpa;
    char grade = 'A';
    char* pGrade = &grade;  

    printf("Age's Memory Address: %p\n" , &age);

    return 0;
    
}