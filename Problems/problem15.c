// 15. Get four digitd frm user and reevrse the last two digits alone

#include <stdio.h>
int main(){
    int number,rev_digits,frst2digits,lst2digits,final_ans;
    printf("Enter a four digit number: ");
    scanf("%d",&number);
    if (number < 1000 || number > 9999) {
        printf("Please enter a valid four-digit number.\n");
        return 1;
    }

    frst2digits = number/100;
    lst2digits = number%100;

    rev_digits = (lst2digits%10) * 10 + lst2digits/10;

    final_ans = (frst2digits*100) + rev_digits;

    printf("The Input is: %d\nThe Result is: %d",number,final_ans);

    
    return 0;
}