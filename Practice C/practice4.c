#include<stdio.h>
int main()
{
    int a,rev=0,original;
    scanf("%d",&a);

    original=a;
    while (a>0)
    {
        rev=rev*10+a%10;
        a=a/10;
        
    }
    if (original==rev)
    {
        printf("palindrome");
    }
    else
    {

        printf("not palindrome");
    }
    
    return 0;
    
}