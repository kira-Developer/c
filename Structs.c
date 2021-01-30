#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;

};
int main() {
    struct Student Student1;
    strcpy(Student1.name , "kira");
    strcpy(Student1.major , "Business");
    Student1.age = 18;
    Student1.gpa = 5;
    printf("%s\t" , Student1.name);
    printf("%d\t" , Student1.age);
    printf("%s\t" , Student1.major);
    printf("%f\t\n" , Student1.gpa);

    struct Student Student2;
    strcpy(Student2.name , "Ahmad");
    strcpy(Student2.major , "Art");
    Student2.age = 17;
    Student2.gpa = 4.2;
    printf("%s\t" , Student2.name);
    printf("%d\t" , Student2.age);
    printf("%s\t" , Student2.major);
    printf("%f\t" , Student2.gpa);

    return 0;

}