#include<stdio.h>
int main()
{
    int a;
    int sum=0;
    scanf("%d",&a);

    for (;a!=0;a=a/10)
    {
        sum=sum^(a%10);
    }
    printf("%d",sum);
    return 0;
    }

