#include <stdio.h>
#include <stdlib.h>
int maxFunc(int number1 , int number2 ,int number3){
    int result ;
    if (number1 >= number2 && number1 >= number3) {result = number1;}
    else if(number2 >= number1 && number2 >= number3){result = number2;}
    else {result = number3;}
    return result;
}
int main()
{
    if(3 > 2 ||!( 2 > 5)){printf("True\n");}
    else{printf("False");}
    printf("%d" , maxFunc(4,10 , 20));
    return 0;
}