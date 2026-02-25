#include<stdio.h>
int main()
{
    int a=12320;
    int rev=0;
   int  original=a;

   while (a>0)
   {
    rev=rev*10+a%10;
    a=a/10;
   }

   if (original==a)
   {
    printf("palindrome");
}
else
{
    printf("Not palindrome");
}
   
   


}