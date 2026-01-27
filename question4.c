#include<stdio.h>
int main()
{
    int class;
    int age;
    float fare;

    scanf("%d", &class);
    scanf("%d", &age);

    switch(class)
    {
        case 1:
        fare=300;

            if(age <=12){
                fare = fare * 0.5;
            }
            else if (age>=60)
            {
                fare = fare * 0.67;
            }
            printf("Fare: %.0f\n", fare);
    
            break;
        case 2:
        fare=1000;
            if(age <=12)
            {
                fare = fare * 0.5;
            }
           printf("Fare: %.0f\n", fare);
            break;
        default:
            printf("Invalid Class\n");
    }
}