//编写一个程序把8个整数读入一个数组中，然后以相反的顺序打印它们。
#include <stdio.h>
int main (void)
{
    int num[8],i;

    printf ("Please input 8 numbers:\n");
    for (i=0;i<8;i++)
        scanf ("%d",&num[i]);
    for (i=7;i>=0;i--)
        printf ("%d ",num[i]);
    printf ("\n");
    return 0;
}