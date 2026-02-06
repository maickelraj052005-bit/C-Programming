#include<stdio.h>

int main()
{
    int size;
    int temp = 1;  

    printf("Enter size: ");
    scanf("%d", &size);

    int a[size];

    printf("Enter numbers:\n");

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < size-1; i++)
    {
        if(a[i] > a[i+1])
        {
            temp = 0;  
        }
    }

    if(temp == 1)
        printf("Yes");
    else
        printf("No");

    return 0;
}
