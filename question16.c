#include <stdio.h>

int main()
{
    int cls, weight;
    int charge = 0;

    printf("Enter Flight Class (1-Economy, 2-Business): ");
    scanf("%d", &cls);

    printf("Enter Extra Weight (kg): ");
    scanf("%d", &weight);

    switch(cls)
    {
        case 1: 
            charge = weight * 300;
            printf("Extra Baggage Charge ₹%d", charge);
            break;

        case 2:

            if(weight <= 3)
            {
                printf("Free");
            }
            else
            {
                charge = (weight - 3) * 300;
                printf("Extra Baggage Charge ₹%d", charge);
            }

            break;

        default:
            printf("Invalid Class");
    }

    return 0;
}
