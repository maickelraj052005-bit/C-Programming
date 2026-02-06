#include <stdio.h>

int main()
{
    int room;
    char season;
    int price;

    printf("Enter Room Type (1-Standard, 2-Deluxe): ");
    scanf("%d", &room);

    printf("Enter Season (A/B/C/D): ");
    scanf(" %c", &season); 

    switch(room)
    {
        case 1:  

            switch(season)
            {
                case 'A':
                    price = 2500;
                    break;

                case 'B':
                    price = 2000;
                    break;

                default:
                    printf("Invalid Season");
                    return 0;
            }
            break;

        case 2:  

            switch(season)
            {
                case 'C':
                    price = 4000;
                    break;

                case 'D':
                    price = 3000;
                    break;

                default:
                    printf("Invalid Season");
                    return 0;
            }
            break;

        default:
            printf("Invalid Room Type");
            return 0;
    }

    printf("₹%d", price);

    return 0;
}
