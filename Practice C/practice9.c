#include<stdio.h>
int main()
{

    printf("Without Temp ");
    int a=10;
    int b=20;


    printf("Before swapping \n");
    printf("%d %d \n",a,b);
    printf("After swapping \n");

        a=a+b;
        b=a-b;
        a=a-b;

    printf("%d %d",a,b);

    return 0;
}