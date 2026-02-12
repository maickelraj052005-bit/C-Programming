#include<stdio.h>
int main()
{
    int size;
    printf("Enter the total number of votes : ");
    scanf("%d",&size);
    int array[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    int sum=0;
    for (int j = 0; j < size; j++){
        sum=sum+array[j]; 
    }

    int max=array[0];
    for (int k = 0; k < size; k++)
    {
       if (array[k]>max)
        {
            max=array[k];
        }
    }
    printf("Total Votes = %d\n",sum);
    printf("highest votes = %d\n",max);

    return 0;
        
    }