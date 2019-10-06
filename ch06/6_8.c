//对6_7进行修改，让它用一个函数来返回计算值
#include <stdio.h>
double ce (double a,double b);
int main (void)
{
    double a,b;
    int i;
    printf ("Please input two values:\n");
    while (scanf ("%lf %lf",&a,&b) == 2)
    {   
        printf ("%lf\n",ce(a,b));
        printf ("Please input again:\n");
        //scanf ("%lf %lf",&a,&b);
    }
    return 0;
}
double ce (double a ,double b)
{
    double ce;
    ce = (a-b)/(a*b);
    return ce;
}