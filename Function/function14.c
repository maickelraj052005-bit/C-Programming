#include<stdio.h>
int perfect(int n)
{

    int sum=0;
    for(int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum+=i;
        }
        if (sum==n)
        {
            return 1;
        }
        
        else
        {
            return 0;
        }
    }
        
    }
    void main(){
        int n;
        scanf("%d",&n);

        if (perfect(n))
        {
            printf("%d is a perfect number ",n);
        }
        else
        {
            printf("%d is a not perfect number ",n);
            
        }
    }
    

