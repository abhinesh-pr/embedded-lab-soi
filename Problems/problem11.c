// 11. Get three digit number from usr and return sum of digits

#include <stdio.h>
int main(){
    int number,temp,sum=0;
    printf("Enter a three digit number: ");
    scanf("%d",&number);
    if (number < 100 || number > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1;
    }    
    temp =number;
    while (temp != 0){
        sum += temp % 10;          
        temp /= 10;
    }
    printf("The sum of digits of %d is %d",number,sum);
    return 0;
}