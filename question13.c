#include <stdio.h>

int main()
{
    int loan, score;

    printf("Enter Loan Type (1-Home, 2-Personal): ");
    scanf("%d", &loan);

    printf("Enter Credit Score: ");
    scanf("%d", &score);

    switch(loan)
    {
        case 1:  

            if(score >= 700)
                printf("Approved");
            else if(score >= 650)
                printf("Manual Review");
            else
                printf("Rejected");

            break;

        case 2:   

            if(score >= 700)
                printf("Approved");
            else
                printf("Rejected");

            break;

        default:
            printf("Invalid Loan Type");
    }

    return 0;
}
