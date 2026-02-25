#include<stdio.h>
int main()
{
    printf("Enter the Size : ");
    int a;
    int temp=0;
    scanf("%d",&a);
    int array[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < a/2; i++)
    {
        temp=array[i];
        array[i]=array[a-1-i];
        array[a-1-i]=temp;
    }
    
    for (int i = 0; i < a; i++)
    {
       printf("%d",array[i]);
    }
    
    return 0;
}