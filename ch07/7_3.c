//编写一个程序。该程序读取整数，直到输入0.
//最终报告输入的偶数总个数、偶数平均值，输入的奇数总个数和平均值
#include <stdio.h>
int main (void)
{
    int n=0,even=0,odd=0;
    int sum_even=0,sum_odd=0;
    double average_even,average_odd;
    printf ("Please input:\n");
    scanf ("%d",&n);
    while (n != 0)
    {
        if (n%2 == 0)
        {
            even++;
            sum_even += n;
        }
        else
        {
            odd++;
            sum_odd += n;
        }
        scanf ("%d",&n);
    }
    average_even = sum_even / (double)even;
    average_odd = sum_odd / (double)odd;
    printf ("even : %d , average : %.3lf\n",even,average_even);
    printf ("odd : %d , average : %.3lf\n",odd,average_odd);
    return 0;
}