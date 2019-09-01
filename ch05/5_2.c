//编写一个程序，此程序要求输入一个整数，
//然后打印从（包括）输入的值到（包括）比输入的值大10的所有整数值
//（也就是说，如果输入5，输出就从5到15）
//要求在各个输出值之间用空格、制表符或换行符分开
#include <stdio.h>
int main(void)
{
    int input;
    int i = 0;
    printf ("Please input the number you want:\n");
    scanf ("%d",&input);
    while (i++ < 10)
    {
        printf ("%-5d",input+i);
    }
    printf ("\n");
    return 0;
}