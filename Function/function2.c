#include<stdio.h>

int max()
{
    int a,b;
    scanf("%d %d",&a,&b);

    if (a>b)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
        
    }
    
}

void main(){
    printf(max());
}