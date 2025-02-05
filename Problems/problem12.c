// 12. Get two digit number from usr and reverse the number

#include <stdio.h>
int main(){
    int number,temp,rev;
    printf("Enter a two digit number: ");
    scanf("%d",&number);
    if (number < 10 || number > 99) {
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