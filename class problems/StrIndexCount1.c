#include<stdio.h>
int main()
{
    int i=0;
    char s[1000];

    gets(s);
    while(s[i]!=NULL){

          i++;
    }
    printf("%d\n",i);

    return 0;
}
