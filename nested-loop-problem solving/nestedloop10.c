#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    for (int i = 0; i <=num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*",j);
        }
        printf("\n");
    }
     for(int a=1; a<=num; a++){
        for (int b = a; b <=num; b++)
        {
           printf("*", a);
        }
        printf("\n");
    
}
}