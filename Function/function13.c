#include<stdio.h>
int leap(int a)
{
    if (a%4==0 && a%100==0 && a%400!=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    int a;
    scanf("%d",&a);
    if (leap(a))
    {
        printf("Not Leap year");
    }
    else
    {
        printf("Leap year");

    }
    
}