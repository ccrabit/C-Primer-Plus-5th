//编写一个程序让用户按厘米输入一个高度值，然后，程序按照厘米和英尺英寸显示这个
//高度值。允许厘米和英寸的值出现小数部分。
//程序允许用户继续输入，直到用户输入一个非正的数值。
#include <stdio.h>
int main(void)
{
    float cm,inch,foot;
    printf ("Please input the height by cm:\n");
    while (scanf ("%f",&cm) == 1 && cm >0 )
    {
        printf ("%.0f cm, %.3f inch, %.3f foot\n",cm,cm*0.3937,cm*0.0328);
    }
    return 0;
}