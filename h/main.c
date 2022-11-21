#include <stdio.h>
#include<conio.h>
int main()
{
   float a,b,c,d;
   printf("Enter time in seconds:");
   scanf("%f",&a);
   b=a/(60*60*24*365);
   printf("Year=%f",b);
   printf("Enter time in years:");
   scanf("%f",&c);
   d=c*(365*24*60*60);
   printf("Second=%f",d);
    return 0;
}
