// 3. Program to check given char is alphabet or not

#include <stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        printf("The character '%c' is an alphabet",ch);
    } else {
        printf("The character '%c' is not an alphabet",ch);
    }
}