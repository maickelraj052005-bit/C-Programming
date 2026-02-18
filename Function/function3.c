#include<stdio.h>
int random (int a)

{
    
    if (a%2==0)
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
    int n;
    scanf("%d",&n);
    if (random(n))
    {
        printf("Even"); 
    }
    else
    {
        printf("Odd");
    }
    
}