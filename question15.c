#include <stdio.h>

int main()
{
    int mode;
    char cat;
    int fee;

    printf("Enter Mode (1-Online, 2-Offline): ");
    scanf("%d", &mode);

    printf("Enter Category (R/S): ");
    scanf(" %c", &cat);  
    switch(mode)
    {
        case 1:   

            switch(cat)
            {
                case 'R':
                    fee = 5000;
                    break;

                case 'S':
                    fee = 3000;
                    break;

                default:
                    printf("Invalid Category");
                    return 0;
            }
            break;

        case 2:   

            switch(cat)
            {
                case 'R':
                    fee = 9000;
                    break;

                case 'S':
                    fee = 7000;
                    break;

                default:
                    printf("Invalid Category");
                    return 0;
            }
            break;

        default:
            printf("Invalid Mode");
            return 0;
    }

    printf("₹%d", fee);

    return 0;
}
