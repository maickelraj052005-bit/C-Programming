#include<stdio.h>
int main()
{
    int n=0;
    int temp=0;
    if (n<=1)
    {
        printf("not prime");
    }
    else
    {
        for (int i = 2; i <= n/2; i++)
        {
            if (n%i==0)
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
            printf("not prime");
        }
        
    }
    
}