#include<stdio.h>
int main()
{
    int size;
    printf("Enter the sensor range : ");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
       scanf("%d",&array[i]);
    }
    int range = 100;
    int brange=10;
    for (int j = 0; j < size; j++)
    {
        if (array[j] >= (range - brange) && array[j] <= (range + brange))
        {
            printf("Sensor reading %d is within the acceptable range.\n", array[j]);
        }
        else
        {
            printf("Sensor reading %d is out of the acceptable range.\n", array[j]);
        }
        
    }
    
    
}