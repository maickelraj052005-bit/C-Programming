#include<stdio.h>
int random(int n)
{
    int fact=1;
    for (int  i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    return fact;
    
}
void main()
{
    int n;
    scanf("%d",&n);
    printf("%d",random(n));
}