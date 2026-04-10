#include<stdio.h>

int digits (int a) 
{
    
    int sum=0;
    
    while (a!=0)
    {
        sum=sum+(a%10);
        a=a/10;
    }
    return sum;
    
}
void main ()
{
    int a;
    scanf("%d",&a);
    printf("%d", digits(a));
}
