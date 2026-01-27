#include <stdio.h>

int main()
{
    int cat, age;
    int premium;

    printf("Enter Category (1-Two, 2-Four): ");
    scanf("%d", &cat);

    printf("Enter Vehicle Age: ");
    scanf("%d", &age);

    switch(cat)
    {
        case 1:  

            if(age <= 5)
                premium = 1500;
            else
                premium = 2500;

            break;

        case 2:  

            if(age <= 5)
                premium = 4000;
            else
                premium = 6000;

            break;

        default:
            printf("Invalid Category");
            return 0;
    }

    printf("₹%d", premium);

    return 0;
}
