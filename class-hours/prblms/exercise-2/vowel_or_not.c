// 4. Program to find given char is vowel or not

#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("The character '%c' is a vowel",ch);
    } else {
        printf("The character '%c' is not a vowel",ch);
    } return 0;
}