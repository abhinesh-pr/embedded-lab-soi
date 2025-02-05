//2. Get a num frm user and sub 5 from it
#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The result is (%d-5): %d",num,num-5);
    return 0;
}