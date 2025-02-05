// 5. Get number from and divide by number 8 and print remainder

#include <stdio.h>
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("The Remainder of %d/8 is %d",number,number%8);
    return 0;
}