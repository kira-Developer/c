#include <stdio.h>
#include <stdlib.h>
int main() {
    double number1;
    double number2;
    char op;
    printf("Enter A Number: ");
    scanf("%lf" , &number1);
    printf("Enter Operator: ");
    scanf(" %c" , &op);
    printf("Enter A Number: ");
    scanf("%lf" , &number2);

    if(op == '+'){ printf("%2.f",number1 + number2);}
    else if(op == '-'){ printf("%2.f",number1 - number2);}
    else if(op == '*'){ printf("%2.f",number1 * number2);}
    else if (op == '/'){ printf("%2.f",number1 / number2);}
    else {printf("Invalid Operator");}

    return 0 ;

}