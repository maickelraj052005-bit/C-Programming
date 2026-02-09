#include<stdio.h>
int main()
{
    int size,odd=0,even=0;
    printf("Enter the size : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the number : \n");

    for (int i = 0; i < size; i++)
    {
       scanf("%d",&array[i]);
    }
    for (int i = 0; i < size; i++)
    {
       if (array[i]%2==0)
       {
        even++;
       }
       else
       {
        odd++;
       }
       
    }
    printf("Even : %d\n",even);
    printf("Odd  : %d\n",odd);
    
}