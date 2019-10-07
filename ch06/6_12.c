//编写一个程序，创建一个8个元素的int数组，并且把元素分别设置为2的前8次幂，
//然后打印出它们的值。使用for循环来设置值；为了变化，使用do while循环来显示这些值
#include <stdio.h>
int power (int x,int y);
int main (void)
{
    int num[8],i;
    for (i=0; i<8; i++)
    {
        num[i]=power(2,i+1);
    }
    i = 0;
    do
    {
        printf ("%5d\n",num[i]);
        i++;
    } while (i<8);
    return 0;
}
int power (int x,int y)
{
    int power;
    for (power=1; y>0; y--)
        power *= x;
    return power;
}