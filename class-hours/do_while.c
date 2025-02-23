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

void forward_series() {
    int lim, i = 1;
    printf("Enter the limit: ");
    scanf("%d", &lim);
    
    do {
        printf("%d\n", i);
        i++;
    } while (i <= lim);
}

void reverse_series() {
    int lim;
    printf("Enter the limit: ");
    scanf("%d", &lim);
    
    do {
        printf("%d\n", lim);
        lim--;
    } while (lim > 0);
}

void sum_of_nums() {
    int lim, sum = 0, i = 1;
    printf("Enter the limit: ");
    scanf("%d", &lim);
    
    do {
        sum += i;
        i++;
    } while (i <= lim);
    
    printf("The sum of numbers is %d\n", sum);
}

void print_even() {
    int lim, i = 2;
    printf("Enter the limit: ");
    scanf("%d", &lim);
    
    do {
        printf("%d\n", i);
        i += 2;
    } while (i <= lim);
}

void print_sum_even() {
    int lim, sum = 0, i = 2;
    printf("Enter the limit: ");
    scanf("%d", &lim);
    
    do {
        sum += i;
        i += 2;
    } while (i <= lim);
    
    printf("The sum of even numbers is %d\n", sum);
}

void multiplication_table() {
    int num, i = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The multiplication table for %d is\n", num);
    
    do {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    } while (i <= 12);
}

int splitdigits(){
    int num,i=1;
    printf("Enter a three digit number: ");
    scanf("%d",&num);
    if (num < 100 || num > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1;
    } 
    do {
        printf("%d\n",num % 10);
        num = num/10;
        i++;
    } while (num>0);
    return 0;
}

int rev3digits(){
    int num,rev=0,i=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    // if (num < 100 || num > 999) {
    //     printf("Please enter a valid three-digit number.\n");
    //     return 1;
    // } 
    printf("Before Reverse: %d\n",num);
    do{
        rev = rev*10 + (num%10);
        num = num/10;
        i++;
    }while(num>0);
    printf("After Reverse: %d\n",rev);
    return 0;
}

int countdigit(){
    int num,i=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    do {
        num = num/10;
        i++;
    }while(num>0);
    printf("Num of digits: %d\n",i);
    return 0;
}

