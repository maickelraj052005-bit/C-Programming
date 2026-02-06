#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    // printf("1.add");
    // printf("2.sub");
    // printf("3.mul");
    // printf("4.div");
    int c;
    scanf("%d",&c);
    switch(c){
    case 1:
        printf("%d of add", a+b);
        break;
    case 2: 
        printf("%d of sub", a-b);
        break; 
    
    case 3: 
        printf("%d of mul", a*b);
        break;
    case 4:
       
        printf("%d of div", a/b);
        break;

    default:
        break;
    }
}