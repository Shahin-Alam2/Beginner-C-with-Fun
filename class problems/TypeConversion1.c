#include<stdio.h>
int main()
{
    char x;
    x='5';
    printf("%c\n",x);

    int y=6;
    int p,z;

    p=x-'\0';
    z=p+y;
    printf("%d\n",z);

    return 0;
}
