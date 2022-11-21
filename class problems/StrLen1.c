#include<stdio.h>
int main()
{
    int i,n;
    char a[10];

    for(i=0;i<10;){
        scanf("%c",&a[i]);
        if(a[i]=='\0'){
            break;
        }
        i++;

    }
    printf("%d\n",i);

    return 0;
}
