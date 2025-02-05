//1. Get number from user and add 2 and print
#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The result is (%d+2): %d",num,num+2);
    return 0;
}