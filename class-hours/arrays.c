#include <stdio.h>

void sizeofarray(),addarrayelements(),sumofarrays(),removearrayelement(),binarysearch();

int main(){
    int choice;
    printf("1.Size of array\n2.Add elements to array\n3.Sum of array\n4.Remove element from array\n5.Binary Search\n\nEnter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        sizeofarray();
        break;
    case 2:
        addarrayelements();
        break;
    case 3:
        sumofarrays();
        break;
    case 4:
        removearrayelement();
        break;
    case 5:
        binarysearch();
        break;
    
    default:
        printf("Enter a valid option!!");
        break;
    }
}

void sizeofarray(){
    int lim;
    printf("Enter Size of Array: ");
    scanf("%d",&lim);
    int num[lim];
    printf("The Size of array is %d",(sizeof(num)/sizeof(num[0])));
}

void addarrayelements(){
    int lim,i;
    printf("Enter Size of Array: ");
    scanf("%d",&lim);
    int num[lim];
    for (i = 0;i<lim;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("Array Numbers are: ");
    for (i = 0;i<lim;i++){
        printf("%d ",num[i]);
    }
}

void sumofarrays(){
    int lim,sum=0,i;
    printf("Enter Size of Array: ");
    scanf("%d",&lim);
    int num[lim];
    for (i = 0;i<lim;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("Array Numbers are: ");
    for (i = 0;i<lim;i++){
        printf("%d ",num[i]);
    }
    for (i = 0;i<lim;i++){
        sum += num[i];
    }
    printf("\nThe sum of array is: %d",sum);
}

void removearrayelement(){
    int lim,remove,flag,i;
    printf("Enter Size of Array: ");
    scanf("%d",&lim);
    int num[lim];
    for (i = 0;i<lim;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("Array Numbers are: ");
    for (i = 0;i<lim;i++){
        printf("%d ",num[i]);
    }
    printf("\n\nEnter a number to remove: ");
    scanf("%d",&remove);
    for (i=0;i<lim;i++){
        if (num[i]==remove){
            flag = 1;
            for (int j=i;j<lim-1;j++){
                num[j] = num[j+1];
            }
            break;
        }
    }
    if(flag == 1){
        printf("\nThe number %d is removed from the array\n",remove);
        for (i = 0;i<lim-1;i++){
            printf("%d ",num[i]);
        }
    } else {
        printf("\nThe number %d is not found in the array\n",remove);
    }
}

void binarysearch(){
    int lim,target,low,high,mid,i;
    printf("Enter Size of Array: ");
    scanf("%d",&lim);
    int num[lim];
    for (i = 0;i<lim;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("Array Numbers are: ");
    for (i = 0;i<lim;i++){
        printf("%d ",num[i]);
    }
    printf("\nEnter the target value: ");
    scanf("%d",&target);
    low = 0;
    high = lim - 1;
    while (low<=high){
        mid = low + (high-low)/2;
        if (num[mid] == target){
            printf("\nThe target %d is at the position of index %d of the array",target,mid);
            break;
        } else if (num[mid]<target){
            low = mid+1;
        } else if (num[mid]>target){
            high = mid-1;
        }
    }
}
