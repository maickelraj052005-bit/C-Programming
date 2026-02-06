#include<stdio.h>

int main()
{
    int n;
    int x = 1;  

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter numbers:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n-1; i++)
    {
        if(a[i] > a[i+1])
        {
            x = 0; 
            break;
        }
    }

    if(x == 1)
        printf("Yes");
    else
        printf("No");

    return 0;
}
