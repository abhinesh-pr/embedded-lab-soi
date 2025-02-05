// 13. Get three digit number from usr and reverse it

#include <stdio.h>
int main(){
    int number,temp,rev;
    printf("Enter a three digit number: ");
    scanf("%d",&number);
    if (number < 100 || number > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1;
    }    
    temp =number;
    printf("The reverse of number %d is: ",number);
    while (temp != 0){
        rev = temp % 10;          
        temp /= 10;
        printf("%d",rev);
    }
    
    return 0;
}