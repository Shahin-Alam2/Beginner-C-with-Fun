#include <stdio.h>

int main()
{
   int a,b,c,i,tc;
   scanf("%d",&tc);
   for(i=0;i<tc;i++){
   scanf("%d%d%d",&a,&b,&c);
   if((a>b&&a<c)||(a<b&&a>c)){
    printf("Case %d: %d\n",i+1,a);
   }
   else if((b>a&&b<c)||(b<a&&b>c)){
    printf("Case %d: %d\n",i+1,b);
   }
   else if((c>a&&c<b)||(c<a&&c>b)){
    printf("Case %d: %d\n",i+1,c);
   }
   }
    return 0;
}
