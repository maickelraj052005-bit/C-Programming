#include<stdio.h>
int main()
{
    int a;
    int b=0;
    scanf("%d",&a);
    for (int i=a%10; a!=0; a=a/10)
    {
       b=b+1;
    }
    printf("%d",b);
    return 0;
    

}