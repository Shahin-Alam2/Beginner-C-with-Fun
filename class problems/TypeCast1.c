#include<stdio.h>
int main()
{
    int a,b;
    double x,y;

    a=5;
    x=8.6705;
    b=(int)x;
    y=(double)a;

    printf("a=%d\n",a);
    printf("b=%d\n",b);     //b=8 kintu ekhane %lf dile 0.000000 asbe

    printf("x=%lf\n",x);
    printf("y=%lf\n",y);      //y=5.000000 kintu ekhane %d dile 0 asbe

    return 0;
}
