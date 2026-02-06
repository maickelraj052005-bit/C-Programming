#include<stdio.h>
int main()
{
    int temp =0;
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the number : \n");
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int  i = 0; i < size; i++)
    {
       if (array[i]!=0)
       {
       array[temp]=array[i];
       temp++;
       }
    }
    for (int i = temp; i < size; i++)
    {
       array[i]=0;
    }
    for (int  i = 0; i <size; i++)
    {  
        printf("%d",array[i]);
    }
    return 0;
}