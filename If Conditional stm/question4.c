// Find greater of 2 numbers:

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        printf("%d is a greater",a);
    }
   else if (b>a)
   {
        printf("%d is a greater",b);
   }
   else
    {
        printf("both are equal");
    }
    
    return 0;
}