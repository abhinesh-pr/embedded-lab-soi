//1. C program to Get and print your name
#include <stdio.h>

int main(){
    char name[50];
    printf("Enter your name:");
    scanf("%s",&name);
    printf("Your name is %s",name);
    return 0;
}