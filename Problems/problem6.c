// 6. Get two digit number from usr and return one's digit

#include <stdio.h>
int main(){
    int number;
    printf("Enter a two digit number: ");
    scanf("%d",&number);
    printf("The One's digit of %d is %d",number,number%10);
    return 0;
}