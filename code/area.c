#include<stdio.h>
#include<math.h>
 int main()
{
    int i,tc;
    double r,pi,c,a,b;
     scanf("%d",&tc);
     pi=2*acos(0.0);
     for(i=0;i<tc;i++){
     scanf("%lf",&r);
   c=pi*r*r;
   a=4*r*r;
     b=a-c;
    printf("Case %d: %0.4lf\n",i+1,b);
   }
   return 0;
}
