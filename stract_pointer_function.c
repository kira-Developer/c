#include <stdio.h>


struct information {
    char *name , *profession;
    int age;

} info;
void yinforomation(struct information *info);

int main() {
    printf("Your Name Is : ");
    char name[30];
    scanf_s("%s", name);
    info.name = name;
    printf("Your Age Is : ");
    scanf_s("%i" , &info.age);
    printf("Your Profession Is : ");
    char profession[30];
    scanf_s("%s", profession);
    info.profession = profession;
    yinforomation(&info);

    return 0;
}

void yinforomation(struct information *info){
    printf("Name:%s\nAge:%i\nprofession:%s\n" , info->name , info->age , info->profession);
};