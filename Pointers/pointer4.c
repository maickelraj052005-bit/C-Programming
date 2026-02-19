#include<stdio.h>

int main()
{
    char a[100], b[50];

    fgets(a,100,stdin);
    fgets(b,50,stdin);

    char *p=a, *q=b;

    while(*p) p++;      

    while(*q)           
        *p++=*q++;

    *p='\0';

    printf("%s",a);
}
