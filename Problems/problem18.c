// 18. Get three digitd frm user and make the ones digit 2

#include <stdio.h>
int main(){
    int number;
    printf("Enter a three digit number: ");
    scanf("%d",&number);
    if (number < 100 || number > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1;
    }

    printf("The Input is: %d\nThe Result is: %d",number,(number/10)*10 +2);
    return 0;
}