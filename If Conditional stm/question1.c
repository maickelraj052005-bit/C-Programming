// Check positive ,negative or zero;

#include<stdio.h>
int main()
{
    int num  ;
    scanf("%d",&num);
    if (num>0)
    {
        printf("%d is postive number",num);
    }
    else if (num<0)
    {
        printf("%d is negative number",num);
    }
    else
    {
        printf("%d is zero ",num);
    }
    return 0;
    
    
}
