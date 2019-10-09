//编写一个程序。该程序读取输入直到遇到#字符，
//使程序打印每个输入的字符以及它的十进制ASCII码
//每行打印8个字符/编码对
#include <stdio.h>
int main (void)
{
    int i=0;
    char ch;
    printf ("Please input:\n");
    while ((ch = getchar()) != '#')
    {
        printf ("%2c/%d",ch,ch);
        i++;
        if (i%8 == 0)
            printf ("\n");
    }
    printf ("\n");
    return 0;
}