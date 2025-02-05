#include <stdio.h>
int main(){
    int age;
    char name[50];
    printf("Enter your name:");
    scanf("%s",name);
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Your name is %s. Your age is %d",name,age);
    return 0;
    
}