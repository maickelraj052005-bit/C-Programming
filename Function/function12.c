#include<stdio.h>
int digit(int a)
{
    int count =0;
    while (a!=0)
    {
        a=a/10;
        count++;
    }
    return count ;
    
}

void main()
{
    int a;
    scanf("%d",&a);
    printf("%d",digit(a)); 
}