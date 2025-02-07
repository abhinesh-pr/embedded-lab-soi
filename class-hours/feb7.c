#include <stdio.h>

int main(){
    int n,c,temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter the power: ");
    scanf("%d", &c);
    temp =n;
    for(int i=1;i<c;i++){
        n *= temp;
    } 
    printf("The value of %d power %d is %d",temp,c,n);
    return 0;
}