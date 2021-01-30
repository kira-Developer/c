#include <stdio.h>
#include <stdlib.h>
int main() {
    int luckyNumbers[] = {4,8,15,16,23,42};
    for(int i = 1 ; i<= 10 ; i++) {
        printf("%i\n" , i);

    }
    for(int i =0 ; i < sizeof(luckyNumbers) / sizeof(luckyNumbers[0]) ; i++){
        printf("%i\n" , luckyNumbers[i]);
    }
    return 0;
}