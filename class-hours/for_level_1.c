// Program to print forward series, reverse series, sum of n numbers, print even number within the given limit (using forr..)


#include <stdio.h>

void forward_series(),reverse_series(),sum_of_nums(),print_even(),print_sum_even(),multiplication_table();
int splitdigits(),rev3digits(),countdigit();

int main(){
    int choice;
    printf("\n1.Forward Series\n2.Reverse Series\n3.Sum of Numbers\n4.Print even numbers only\n5.Print Sum of even numbers\n6.Print Multiplication Table\n7.Split Digits of # digit numbr\n8.Reverse 3 digit number\n9.Find Digits in a number\n\nEnter your choice:  ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        forward_series();
        break;
    case 2:
        reverse_series();
        break;
    case 3:
        sum_of_nums();
        break;
    case 4:
        print_even();
        break;
    case 5:
        print_sum_even();
        break;
    case 6:
        multiplication_table();
        break;
    case 7:
        splitdigits();
        break;
    case 8:
        rev3digits();
        break;
    case 9:
        countdigit();
        break;
    default:
    printf("Enter a valid choice");
        break;
    } return 0;
    
}

void forward_series(){
    int lim;
    printf("Enter the limit: ");
    scanf("%d",&lim);
    for(int i=1;i<=lim;i++){
        printf("%d\n",i);
    }
};

void reverse_series(){
    int lim;
    printf("Enter the limit: ");
    scanf("%d",&lim);
    for(lim;lim>0;lim--){
        printf("%d\n",lim);
    } 
};

void sum_of_nums(){
    int lim,sum=0;
    printf("Enter the limit: ");
    scanf("%d",&lim);
    
    for(int i=1;i<=lim;i++){
        sum+=i;
    }
    printf("The sum of numbers is %d",sum);
};

void print_even(){
    int lim;
    printf("Enter the limit: ");
    scanf("%d",&lim);
    
    for(int i=1;i<=lim;i++){
        if (i%2 ==0){
            printf("%d\n",i);
        }
    }
};

void print_sum_even(){
    int lim,sum = 0;
    printf("Enter the limit: ");
    scanf("%d",&lim);
    
    for(int i=1;i<=lim;i++){
        if (i%2 ==0){
            sum+=i;
        }
    }
    printf("The sum of numbers is %d",sum);
};

void multiplication_table(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The multiplication table for %d is\n",num);
    for(int i=1;i<=12;i++){
        printf("%dx%d=%d\n",num,i,num*i);
    }
}

int splitdigits(){
    int num;
    printf("Enter a three digit number: ");
    scanf("%d",&num);
    if (num < 100 || num > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1;
    } 
    for (int i=1;num>0;i++){
        printf("%d\n",num % 10);
        num = num/10;
    } return 0;
}

int rev3digits(){
    int num,rev=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    // if (num < 100 || num > 999) {
    //     printf("Please enter a valid three-digit number.\n");
    //     return 1;
    // } 
    printf("Before Reverse: %d\n",num);
    for (int i=1;num>0;i++){
        rev = rev*10 + (num%10);
        num = num/10;
    } printf("After Reverse: %d\n",rev);
    return 0;
}

int countdigit(){
    int num,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (i=0;num>0;i++){
        num = num/10;
    } printf("Num of digits: %d\n",i);
    return 0;
}

