// 5. Program to find a given year is leep year or not

#include <stdio.h>
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("The given year (%d) is a leap year",year);
    } else {
        printf("The given year (%d) is not a leap year",year);
    }
}