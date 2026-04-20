#include<stdio.h>
int main()
{

    printf("With Temp "); 
    int a=10;
    int b=20;
    int temp=0;

    printf("Before swapping \n");
    printf("%d %d \n",a,b);
    printf("After swapping \n");

    temp=a;
    a=b;
    b=temp;

    printf("%d %d",a,b);

    return 0;
}
