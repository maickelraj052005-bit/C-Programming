#include<stdio.h>
int main()
{
    char s [100];
    fgets(s,sizeof(s),stdin);
    char  *p = &s;
    int count=0;

    while (*p)
    {
         if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||
           *p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
           {
            count++;
           }
           p++;
    }
    
    printf("%d",count);
}