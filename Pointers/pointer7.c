#include<stdio.h>

int main()
{
    int n,a[100],sum=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int *p=a; p<a+n; p++)
        sum+=*p;

    printf("%d",sum);
}
