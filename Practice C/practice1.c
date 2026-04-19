#include<stdio.h>
int main()
{ 

    int a;  
    printf("Enter the Number 1: "); 
    scanf("%d",&a);  
    int b;
    printf("Enter the Number 2: "); 
    scanf("%d",&b);
    
    
    printf("======================= \n");
    printf("Select The opertor\n");
    printf("======================= \n");
    printf("+  -  *  / \n");
    char type ;
    scanf(" %c",&type);

    switch (type)
    {
    case '+':
        printf("The addition of two numbers is : %d",a+b);
        break;
    case '-':
        printf("The Sub of two numbers is : %d",a-b);
        break;
    case '*':
        printf("The Multiplication of two numbers is : %d",a*b);
        break;
    case '/':
        printf("The Divison of two numbers is : %d",a/b);
        break;
    
    default:
    printf("Plese enter the crct opertor");
        break;
    }
}
