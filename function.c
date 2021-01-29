#include <stdio.h>

int my_func(int a , int z );
int my_func2(char *name);
int main () 
{
    int sum  = my_func(10, 20);
    char *name = my_func2("Hello World!");
    printf("%s\n", name);
    printf("%i\n", sum);
    printf("%i\n", my_func(10, 10));
    printf("%s\n", my_func2("Hello World!"));
    return 0;

}

int my_func(int a , int z) 
{
    int sum = a + z;
    return sum;
}

int my_func2(char *name)
{
    return name;
}