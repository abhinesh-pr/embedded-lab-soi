// 17. Get two digit number from usr and make tens's digit zero

#include <stdio.h>
int main(){
    int number,temp;
    printf("Enter a two digit number: ");
    scanf("%d",&number);
    if (number < 10 || number > 99) {
        printf("Please enter a valid two-digit number.\n");
        return 1;
    } 


    printf("The Input is: %d\nThe Result is: %02d",number,number%10);
    return 0;
}