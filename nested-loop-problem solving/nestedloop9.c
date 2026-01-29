#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for (int i = 1; i <=num; i++)
    {
       
        for (int k = 1; k <=num-i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
        
        
    }
    for (int a = num; a >=1; a--)
    {
       
        for (int b = 1; b <=num-a; b++)
        {
            printf(" ");
        }
        for (int c = 1; c <= 2*a-1; c++)
        {
            printf("*");
        }
        printf("\n");
        
        
    }
}

