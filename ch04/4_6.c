//编写一个程序，设置一个值为1.0/3.0的double类型变量和一个值为1.0/3.0的float类型变量
//每个变量的值显示三次：一次在小数点右侧显示4个数字，一次在小数点右侧显示12个数字，
//另一次在小数点右侧显示16个数字。
//同时要让程序包括float.h文件，并娴熟FLT_DIG和DBL_DIG的值。
//1.0/3.0的显示值和这些值一样吗？
#include <stdio.h>
#include <float.h>
int main(void)
{
    float a;
    double b;
    a=1.0/3.0;
    b=1.0/3.0;

    printf ("float:\n");
    printf ("%.4f %.12f %.16f\n",a,a,a);
    printf ("double:\n");
    printf ("%.4f %.12f %.16f\n",b,b,b);
    printf ("%d %d\n",FLT_DIG,DBL_DIG);
//FLT_DIG,DBL_DIG分别是float和double类型的有效位数，
//其中float能保证的有效位数最多是6~7位，完全能保证的是6位，
//    double是15~16位，完全能保证的是15位

    return 0;
}