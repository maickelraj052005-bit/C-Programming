#include<stdio.h>

int main()
{
    int n,a[100];
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int *s=a, *e=a+n-1, t;

    while(s<e)
    {
        t=*s;
        *s=*e;
        *e=t;
        s++; 
        e--;
    }

    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
