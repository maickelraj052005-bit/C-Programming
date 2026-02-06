#include <stdio.h>

int main()
{
    int code, exp;
    int salary, bonus = 0;

    printf("Enter Code (1-Dev, 2-Tester): ");
    scanf("%d", &code);

    printf("Enter Experience: ");
    scanf("%d", &exp);

    switch(code)
    {
        case 1:  
            salary = 50000;
            break;

        case 2:
            salary = 35000;
            break;

        default:
            printf("Invalid Code");
            return 0;
    }

   
}
