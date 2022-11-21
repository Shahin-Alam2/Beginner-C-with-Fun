#include<stdio.h>
int main()
{
    int i=0;
    char a[100];

    while(a[i]!='\0'){
        scanf("%s",a[i]);
        i++;
    }
    printf("%d\n",i);

    return 0;
}
