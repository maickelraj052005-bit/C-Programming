#include<stdio.h>

int interest()
{
    int p,r,t;  
    scanf("%d %d %d",&p,&r,&t);
 
    int c = (p*r*t)/100;
    
  
    return c;
 
}

void main() 
{
    printf("%d",interest());
}
