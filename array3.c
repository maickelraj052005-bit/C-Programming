#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    int count=0;
    for(int i=0; i<size; i++){
        count=count+array[i];
    }
    printf("The sum of given numbers : %d ",count);
    printf("The avg of total num : %d",count/size);
}

