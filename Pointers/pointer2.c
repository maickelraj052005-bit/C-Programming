#include<stdio.h>
int main()
{
    int a,b,temp=0;
    scanf("%d %d",&a,&b);
    printf("before swap : ");
    printf("%d %d\n",a,b);
    
    int *p=&a;
    int *q=&b;

    temp=*p;
    *p=*q;
    *q=temp;
    printf("After swap : ");

printf("%d %d",a,b);



}