//编写一个程序，要求用户输入行驶的英里数和消耗汽油的加仑数。
//接着应该计算和显示消耗每加仑汽油行驶的英里数，显示方式是在小数点右侧显示一个数字。
//然后，根据1加仑约等于3.785升，1英里约等于1.609公里的规则，转换成每百公里的升数。
//用符号常量表示两个转换系数
#include <stdio.h>
#define L 3.785
#define KM 1.609
int main(void)
{
    float s,oil;
    printf ("Please input the miles:\n");
    scanf ("%f",&s);
    printf ("Please input the gas you have uesd:\n");
    scanf ("%f",&oil);

    printf ("Every gallon can move you car %.1f mile\nor\n",s/oil);
    printf ("Every lift can move you car %.1f hundreds KM\n",(s/100/KM)/(oil/L));

    return 0;
}