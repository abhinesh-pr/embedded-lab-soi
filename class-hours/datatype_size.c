#include <stdio.h>
int main(){
    printf("The Character size is %lu byte\n",sizeof(char));
    printf("The Integer size is %lu byte\n",sizeof(int));
    printf("The Float size is %lu byte\n",sizeof(float));
    printf("The Short Int size is %lu byte\n",sizeof(short));
    printf("The Double size is %lu byte\n",sizeof(double));
    printf("The Long size is %lu byte\n",sizeof(long));
    printf("The Long Long size is %lu byte\n",sizeof(long long));
    printf("The Long Double size is %lu byte\n",sizeof(long double));
    return 0;
}