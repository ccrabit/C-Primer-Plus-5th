//编写一个程序，创建两个8个元素的double数组，
//使用一个循环来让用户键入第一个数组的8个元素的值。
//程序把第二个数组的元素设置为第一个数组的累计和。
//最后，使用一个循环显示两个数组中的内容，第一个数组在第一行中显示，
//第二个数组中的每个元素在第一个数组的对应元素下显示
#include <stdio.h>
int main (void)
{
    double num1[8],num2[8];
    int i=0;
    do
    {
        printf ("Please input the number:\n");
        scanf ("%lf",&num1[i]);
        i++;
    } while (i<8);
    for (i=1,num2[0]=num1[0];i<8;i++)
    {
        num2[i] = num1[i] + num2[i-1];
    }
    for (i=0;i<8;i++)
    {
        printf ("%8.3lf",num1[i]);
    }
    printf ("\n");
    for (i=0;i<8;i++)
    {
        printf ("%8.3lf",num2[i]);
    }
    printf ("\n");
    return 0;
}