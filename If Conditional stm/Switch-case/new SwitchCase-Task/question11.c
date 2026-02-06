#include <stdio.h>

int main()
{
    int plan;
    float data;

    printf("Enter Plan (1 or 2): ");
    scanf("%d", &plan);

    printf("Enter Data Used (GB): ");
    scanf("%f", &data);

    switch(plan)
    {
        case 1: 

            if(data <= 1.0)
                printf("Normal Speed");
            else
                printf("Speed Reduced");

            break;

        case 2:  

            if(data <= 2.0)
                printf("Normal Speed");
            else
                printf("Extra Charges Applied");

            break;

        default:
            printf("Invalid Plan");
    }

    return 0;
}
