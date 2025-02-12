#include <stdio.h>

int a,b,add(),sub(),mul(),quo(),rem();
void sumofdigits(),pattern1(),pattern2(),pattern3(),pattern4();

int main(){
    int choice;
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Quotient\n5.Remainder\n6.Sum or Digits\n7.Pattern 1\n8.Pattern 2\n9.Pattern 3\n10.Pattern 4\n\nEnter your choice: ");
    scanf("%d",&choice);
    printf("\n\n");
    switch (choice)
    {
    case 1:
        printf("Enter number 1: ");
        scanf("%d",&a);
        printf("Enter number 2: ");
        scanf("%d",&b);
        printf("The sum of %d and %d is %d",a,b,add());
        break;
    case 2:
        printf("Enter number 1: ");
        scanf("%d",&a);
        printf("Enter number 2: ");
        scanf("%d",&b);
        printf("The diff of %d and %d is %d",a,b,sub());
        break;
    case 3:
        printf("Enter number 1: ");
        scanf("%d",&a);
        printf("Enter number 2: ");
        scanf("%d",&b);
        printf("The product of %d and %d is %d",a,b,mul());
        break;
    case 4:
        printf("Enter number 1: ");
        scanf("%d",&a);
        printf("Enter number 2: ");
        scanf("%d",&b);
        printf("The quotient of %d by %d is %d",a,b,quo());
        break;
    case 5:
        printf("Enter number 1: ");
        scanf("%d",&a);
        printf("Enter number 2: ");
        scanf("%d",&b);
        printf("The remainder of %d by %d is %d",a,b,rem());
        break;
    case 6:
        printf("Enter a 3 digit number: ");
        scanf("%d",&a);
        sumofdigits(a);
        break;
    case 7:
        pattern1();
        break;
    case 8:
        pattern2();
        break;
    case 9:
        pattern3();
        break;
    case 10:
        pattern4();
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

void sumofdigits(int a){
    int sum =0,temp,num = a;
    for (int i=0;a>0;i++){
        temp = a%10;
        a = a/10;
        sum += temp;
        
    }
    printf("Sum of '%d' digits is %d",num,sum);
}

void pattern1(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("* ");
        }
        printf("\n");
    }
}

void pattern2(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("1 ");
        }
        printf("\n");
    }
}

void pattern3(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",i+1);
        }
        printf("\n");
    }
    
}

void pattern4(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",j+1);
        }
        printf("\n");
    }
}