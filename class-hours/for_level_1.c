#include <stdio.h>

int forward_series(){
    int lim;
    printf("Enter the limit: ");
    scanf("%d",&lim);
    for(int i=1;i<=lim;i++){
        printf("%d\n",i);
    } return 0;
};

int reverse_series(){
    int lim;
    printf("Enter the limit: ");
    scanf("%d",&lim);
    for(lim;lim>0;lim--){
        printf("%d\n",lim);
    } return 0;
};

int sum_of_nums(){
    int lim,sum=0;
    printf("Enter the limit: ");
    scanf("%d",&lim);
    
    for(int i=1;i<=lim;i++){
        sum+=i;
    }
    printf("The sum of numbers is %d",sum); return 0;
};

int main(){
    int choice;
    printf("\n1.Forward Series\n2.Reverse Series\n3.Sum of Numbers\n\nEnter your choice:  ");
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
    
    default:
    printf("Enter a valid choice");
        break;
    }
    
}

