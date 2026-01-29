#include<stdio.h>
int main()
{
    char num;
    scanf("%c",&num);
    for (char i = 'A'; i <=num; i++)
    {
       for (char j = 'A'; j <=i; j++)
       {
        printf("%c",i);
       }
       printf("\n");
    }
    
}