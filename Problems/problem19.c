// 19. Get three digitd frm user and make the tens digit 0

#include <stdio.h>
int main(){
    int number,rem,frstdgts;
    printf("Enter a three digit number: ");
    scanf("%d",&number);
    if (number < 100 || number > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1;
    }

    rem = number%10;
    frstdgts = (number/100)*100 ;

    printf("The Input is: %d\nThe Result is: %d",number,frstdgts+rem);
    return 0;
}