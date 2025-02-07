#include <stdio.h>

int a,b,add(),sub(),mul(),quo(),rem();

int main(){
    int choice;
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Quotient\n5.Remainder\n\nEnter your choice: ");
    scanf("%d",&choice);
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);
    switch (choice)
    {
    case 1:
        printf("The sum of %d and %d is %d",a,b,add());
        break;
    case 2:
        printf("The diff of %d and %d is %d",a,b,sub());
        break;
    case 3:
        printf("The product of %d and %d is %d",a,b,mul());
        break;
    case 4:
        printf("The quotient of %d by %d is %d",a,b,quo());
        break;
    case 5:
        printf("The remainder of %d by %d is %d",a,b,rem());
        break;
    
    default:
        printf("Enter a valid choice!!");
        break;
    }
}

int add(){
    return a+b;
}
int sub(){
    return a-b;
}
int mul(){
    return a*b;
}
int quo(){
    return a/b;
}
int rem(){
    return a%b;
}