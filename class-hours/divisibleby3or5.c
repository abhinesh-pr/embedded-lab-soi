// Program to get a numbr from user and check whether is divisible by 3 or 5 or by both 3 and 5 

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num%3 == 0 && num%5 == 0){
        printf("The number %d is divisible by both 3 and 5",num);
    } else if (num%3 == 0){
        printf("The number %d is divisible by 3",num);
    } else if (num%5 == 0){
        printf("The number %d is divisible by 5",num);
    } else {
        printf("The number %d is not divisible by 3 or 5",num);
    } return 0;
}