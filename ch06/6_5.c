//编写一个程序打印一个表，表的每一行都给出一个整数、它的平方以及它的立方。
//要求用户输入表的上限和下限。使用一个for循环。
#include <stdio.h>
int main (void)
{
    int top,low;
    printf ("Please enter the top:\n");
    scanf ("%d",&top);
    printf ("Please enter the low:\n");
    scanf ("%d",&low);
    for (;low<=top;low++)
        printf ("|%4d|%8d|%10d|\n",low,low*low,low*low*low);
    return 0;
}