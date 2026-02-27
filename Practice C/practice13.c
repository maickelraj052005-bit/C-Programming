#include<stdio.h>
int main()
{
    int num,temp=0;
    scanf("%d",&num);

    if (num<=1)
    {
        printf("Not prime");

    }
    else
    {

        for (int i = 2; i <= num/2; i++)
        {
        if (num%i==0)
        {
           temp=1;
           break;
        }
        
    }
    
    if (temp==0)
    {
        printf("prime");
    }
    else
    {
        printf("Not prime");
    }
    
}
    
    return 0;
    
    
}