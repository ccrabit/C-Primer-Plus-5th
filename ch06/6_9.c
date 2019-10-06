//编写一个程序，要求用户输入下限整数和一个上限整数，
//然后，一次计算从下限到上限的每一个整数的平方的加和，最后显示结果。
//程序将不断提示用户输入下限整数和上限整数并显示出答案，
//直到用户输入的上限整数小于或等于下限整数为止。
#include <stdio.h>
int main(void)
{
    int low,up;
    long long sum;

    printf ("Enter lower integer limits:\n");
    scanf ("%d",&low);
    printf ("Enter upper integer limits:\n");
    scanf ("%d",&up);
    while (low<up)
    {
        for (sum = 0;low<=up;low++)
            sum += low * low;
        printf ("The sum of the squares from %d to %d is %lld\n",low,up,sum);
        printf ("Enter lower integer limits again:\n");
        scanf ("%d",&low);
        printf ("Enter upper integer limits again:\n");
        scanf ("%d",&up);
    }
    printf ("Done.\n");

    return 0;
}