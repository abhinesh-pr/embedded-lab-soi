//2. C Program to check a number is positive or negative

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num == 0){
        printf("The number %d is neither positive nor negative",num);
    } else if(num > 0){
        printf("The number %d is positive",num);
    } else if(num < 0){
        printf("The number %d is negative",num);
    } return 0;
}