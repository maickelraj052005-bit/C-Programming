#include <stdio.h>

int main()
{
    int vehicle, trips;
    int charge;

    printf("Enter Vehicle Type (1-Car, 2-Truck): ");
    scanf("%d", &vehicle);

    printf("Enter Trips: ");
    scanf("%d", &trips);

    switch(vehicle)
    {
        case 1:  

            if(trips == 1)
                charge = 100;
            else
                charge = 800;

            break;

        case 2: 
            charge = trips * 240;
            break;

        default:
            printf("Invalid Vehicle Type");
            return 0;
    }

    printf("₹%d", charge);

    return 0;
}
