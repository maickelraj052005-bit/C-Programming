#include <stdio.h>

int main()
{
    int plan, mode;
    int amount;
    scanf("%d", &plan);
    printf("Enter Mode (11-UPI,12-Card,13-Wallet): ");
    scanf("%d", &mode);
    switch(plan)
    {
        case 1:  
            amount = 199;

            switch(mode)
            {
                case 11:
                case 12:
                    amount = amount - 20;
                    break;

                case 13:
                    break;
            }
            break;

        case 2:  
            amount = 399;

            switch(mode)
            {
                case 11:
                case 12:
                    amount = amount - 20;
                    break;

                case 13:
                    break;
            }
            break;
    }

    printf("Pay ₹%d", amount);

    return 0;
}
