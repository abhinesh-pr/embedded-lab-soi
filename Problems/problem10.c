// 10. Get three digit number from usr and return hundred's digit

#include <stdio.h>
int main(){
    int number;
    printf("Enter a three digit number: ");
    scanf("%d",&number);
    if (number < 100 || number > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1;
    } 
    printf("The hundreds's digit of %d is %d",number,(number/100)%10);
    return 0;
}