//7. Program to swap two numbrs
#include <stdio.h>
int main(){
    int num1,num2,temp;
    printf("Enter Number 1:");
    scanf("%d",&num1);
    printf("Enter Number 2:");
    scanf("%d",&num2);
    printf("Before Swapping...\nA: %d\nB: %d\n\n",num1,num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After Swapping...\nA: %d\nB: %d",num1,num2);
}