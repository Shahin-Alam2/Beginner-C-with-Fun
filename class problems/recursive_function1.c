#include<stdio.h>

int fact(int n);

int main()
{
    int n,value;

   while(1){
        printf("Enter number: (Input negative number to exit)\n");
    scanf("%d",&n);
  /* if(n==-1){
    break;
   }*/
    value=fact(n);
    printf("Factorial of %d is %d.\n",n,value);
   }
    return 0;
}

int fact(int n){

    if(n==0){
        return 1;
    }
    else
        return n*fact(n-1);
}
