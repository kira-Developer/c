#include <stdio.h>

void  sayHello(char name[] , int age);
int main (){
    sayHello("kira" , 18);
    sayHello("any" , 11);
    return 0;
}

void sayHello(char name[] , int age) {
    printf("Hello %s You Are %d\n" , name , age);
}

