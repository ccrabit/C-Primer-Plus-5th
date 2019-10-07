//Licky赢了100万美金，他把它存入一个年息%8的账户中。
//在每年的最后一天，取出10万美金。
//计算需要多少年会清空账户
#include <stdio.h>
int main (void)
{
    const float acc = 0.08;
    int year = 0;
    float m = 100.0;
    do
    {
        year++;
        m += m * acc -10.0;
    }while(m>0);
    printf ("%d years later\n",year);
    return 0;
}