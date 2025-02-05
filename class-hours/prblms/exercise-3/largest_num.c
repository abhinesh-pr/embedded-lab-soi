//1. Largest number among three numbers

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter Number (A): ");
    scanf("%d",&a);
    printf("Enter Number (B): ");
    scanf("%d",&b);
    printf("Enter Number (C): ");
    scanf("%d",&c);
    if (a>b){
        if (a>c){
            printf("A is the largest among given numbers");
        } else if (a<c){
            printf("C is the largest among given numbers");
        }
    } else {
        if (b>c){
            printf("B is the largest among given numbers");
        } else if (b<c){
            printf("C is the largest among given numbers");
        }
    } return 0;
}