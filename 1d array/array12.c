#include<stdio.h>
int main()
{   
    int price=1;
    int min=10000;
    int size;
    printf("Enter the Size :");
    scanf("%d",&size);
    int array[size];
    printf("Enter the Number  :\n");

    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < size; i++)
    {
       if (array[i]>0)
       {
        if (array[i]<min)
        {
            min=array[i];
        }
        
       }
    }
    
    
    
    if (price==1)
    {
           printf("Ans : %d",min);
       
    }
    else
    {
        printf("No positive Number ");
    }
       
    // if (price)
    // {
    //     printf("Ans : %d",min);

    // }
    // else
    // {
    //     printf("No Positive ");
    // }
    return 0;
    
}