//让程序要求用户输入一个大学字母，使用嵌套循环产生
//像下面这样的的金字塔图案：
//    A
//   ABA
//  ABCBA
// ABCDCBA
//ABCDEDCBA
#include <stdio.h>
int main (void)
{
    const int row = 5;
    const int col = 9;
    char ch;
    int i,j;

    for (i=0;i<row;i++)
    {
        for (j=0;j<(col-i*2-1)/2;j++)
            printf (" ");
        for (ch='A';ch<('A'+i);ch++)
            printf ("%c",ch);
        for (ch=('A'+i);ch>='A';ch--)
            printf ("%c",ch);
        for (j=0;j<(col-i*2-1)/2;j++)
            printf (" ");
        printf ("\n");
    }

    return 0;
}