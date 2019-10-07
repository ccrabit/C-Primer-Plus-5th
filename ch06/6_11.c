//编写一个程序来计算这两个序列不断变化的总和，直到达到某个次数。
//让用户交互地输入这个次数，
//看看在20次、100次和500次之后的总和。是否每个序列都看上去要收敛于某个值？
//+1.0 +1.0/2.0 +1.0/3.0 +1.0/4.0 ···
//+1.0 -1.0/2.0 +1.0/3.0 -1.0/4.0 ···
#include <stdio.h>
#include <math.h>
//int power
int main (void)
{
    int time,i;
    double sum1,sum2;
    printf ("Please input the times:\n");
    scanf ("%d",&time);
    for (i=1,sum1=0,sum2=0;i<=time;i++)
    {
        sum1 += 1.0/i;
        sum2 += pow(-1,i+1)/i;
    }
    printf ("sum1 = %f,sum2 = %f\n",sum1,sum2);
    return 0;
}