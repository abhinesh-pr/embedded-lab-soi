// 5.Fahremheit to Celcius
#include<stdio.h>
int main(){
    float c,f;
    printf("Enter the Fahrenheit :");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("Fahrenheit Value is: %.2f\nCelsius Value is: %.2f",f,c);
    return 0;
}