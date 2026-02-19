#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int *p=&a;
    printf("%d ",*p);
    return 0;
}

