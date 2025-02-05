//6. To print size of int,float,double,char

#include <stdio.h>

int main(){
    printf("The char size is %lu byte\n",sizeof(char));
    printf("The int size is %lu byte\n",sizeof(int));
    printf("The float size is %lu byte\n",sizeof(float));
    printf("The double size is %lu byte\n",sizeof(double));
}