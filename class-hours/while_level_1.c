// Program to print forward series, reverse series, sum of n numbers, print even number within the given limit (using whileh..)


#include <stdio.h>

void forward_series(){
    int lim,i=1;
    printf("Enter the limit: ");
    scanf("%d",&lim);
    while(i<=lim){
        printf("%d\n",i);
        i++;
    }
};

void reverse_series(){
    int lim;
    printf("Enter the limit: ");
    scanf("%d",&lim);
    while(lim>0){
        printf("%d\n",lim);
        lim--;
    } 
};

void sum_of_nums(){
    int lim,sum=0,i=1;
    printf("Enter the limit: ");
    scanf("%d",&lim);
    
    while(i<=lim){
        sum+=i;
        i++;
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
    int lim,sum = 0,i=1;
    printf("Enter the limit: ");
    scanf("%d",&lim);
    
    while(i<=lim){
        if (i%2 ==0){
            sum+=i;
        }
        i++;
    }
    printf("The sum of numbers is %d",sum);
};

void multiplication_table(){
    int num,i=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The multiplication table for %d is\n",num);
    while(i<=12){
        printf("%dx%d=%d\n",num,i,num*i);
        i++;
    }
}

int splitdigits(){
    int num,i=1;
    printf("Enter a three digit number: ");
    scanf("%d",&num);
    if (num < 100 || num > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1;
    } 
    while (num>0){
        printf("%d\n",num % 10);
        num = num/10;
        i++;
    } return 0;
}

int main(){
    int choice;
    printf("\n1.Forward Series\n2.Reverse Series\n3.Sum of Numbers\n4.Print even numbers only\n5.Print Sum of even numbers\n6.Print Multiplication Table\n7.Split Digits of # digit numbr\n\nEnter your choice:  ");
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
    
    default:
    printf("Enter a valid choice");
        break;
    } return 0;
    
}

