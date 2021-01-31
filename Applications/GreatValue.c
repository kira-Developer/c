#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(int argc , char** argv) {
    int temp ;
    int max = -999;
    printf("Welcome To  Great Value application\n");
    for(int i = 0 ; i < 4 ; i++) {
        printf("please add any number : ");
        scanf("%d" , &temp);
        printf("\n");
    }
    if(temp > max) {max = temp;}
    printf("Great Value Is %d" , max);
    return 0;
}