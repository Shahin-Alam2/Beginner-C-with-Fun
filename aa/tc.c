#include <stdio.h>

int main()
{
   int a,b,c,i,tc;
   scanf("%d",&tc);
   for(i=0;i<tc;i++){
    scanf("%d%d%d",&a,&b,&c);
   if(a+b>c||b+c>a||c+a>b){
    if(a==b==c){
        printf("Case %d: Equilateral\n",i+1);
    }
    else if((a==b)&&(b!=c)||(a!=b)&&(b==c)||(a==c)&&(c!=b)){
        printf("Case %d: Isosceles",i+1);
    }
    else{
        printf("Case %d: Scalene",i+1);
    }
   }
   else{
    printf("Case %d: Invalid",i+1);
   }
   }
    return 0;
}
