#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fpointer = fopen("C:\\Users\\kira\\Desktop\\C\\fileForWrite.txt" , "w");

    fprintf(fpointer,"Hello i'm write this text from c lang !");
    fclose(fpointer);
    return 0;
}