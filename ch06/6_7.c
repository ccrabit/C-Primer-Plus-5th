//编写一个程序，要求输入两个浮点数，然后打印出用两者的差值除以二者的乘积所得的结果。
//在用户键入非数字的输入之前程序循环处理每对输入值。
#include <stdio.h>
int main (void)
{
    double a,b;
    int i;
    printf ("Please input two values:\n");
    while (scanf ("%lf %lf",&a,&b) == 2)
    {   
        printf ("%lf\n",(a-b)/(a*b));
        printf ("Please input again:\n");
        //scanf ("%lf %lf",&a,&b);
    }
    return 0;
    
}