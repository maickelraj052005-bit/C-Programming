#include<stdio.h>
int add ()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c= a+b;
    return c;
}
void main ()
{
   printf("%d", add());
}