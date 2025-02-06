// Basic Calculator Using Switch case

#include <stdio.h>
int main(){
    int num1,num2,choice;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n\nEnter your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("%d+%d = %d",num1,num2,(num1+num2));
        break;
    case 2:
        printf("%d-%d = %d",num1,num2,(num1-num2));
        break;
    case 3:
        printf("%dx%d = %d",num1,num2,(num1*num2));
        break;
    case 4:
        printf("%d/%d = %.2f",num1,num2,(float)num1/num2);
        break;
    
    default:
        printf("Enter a valid choice!\n\n");
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n\nEnter your choice: ");
        scanf("%d",&choice);
        break;
    } return 0;
}