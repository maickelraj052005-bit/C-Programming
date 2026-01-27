#include <stdio.h>

int main()
{
    int acc, years;
    int interest;

    printf("Enter Account Type (1-Savings, 2-FD): ");
    scanf("%d", &acc);

    printf("Enter Years: ");
    scanf("%d", &years);

    switch(acc)
    {
        case 1:  
            interest = 4;
            break;

        case 2: 

            if(years <= 3)
                interest = 5;
            else
                interest = 7;

            break;

        default:
            printf("Invalid Account Type");
            return 0;
    }

    printf("Interest %d%%", interest);

    return 0;
}
