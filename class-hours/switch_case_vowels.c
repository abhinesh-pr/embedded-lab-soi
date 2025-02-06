// Switch to find a given alphabet is vowel or consonant

#include <stdio.h>
int main(){
    char choice;
    printf("Enter number the alphabet: ");
    scanf("%c",&choice);
    switch (choice)
    {
    case 'a':case 'A':
    case 'e':case 'E':
    case 'i':case 'I':
    case 'o':case 'O':
    case 'u':case 'U':
        printf("The alphabet %c is a vowel",choice);
        break;
    
    default:
        if ((choice >= 'A' && choice <= 'Z') || (choice >= 'a' && choice <= 'z')){
            printf("The alphabet %c is a consonant",choice);
        } else {
            printf("Invalid Choice");
        }
        break;
    } return 0;
}