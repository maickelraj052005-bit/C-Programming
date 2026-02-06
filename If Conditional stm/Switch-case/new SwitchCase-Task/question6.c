#include <stdio.h>

int main()
{
    int amount, speed;
    int charge = 0;
    scanf("%d", &amount);

    printf("Enter Speed (1-Normal, 2-Express): ");
    scanf("%d", &speed);

    switch(speed)
    {
        case 1:   
            charge = 50;
            break;
        case 2:  

            if(amount < 1000)
                charge = 100;
            else
                charge = 0;

            break;
        default:
            printf("Invalid Speed");
            return 0;
    }
    printf("Delivery ₹%d", charge);

    return 0;
}
