//编写一个程序把一个单词读入一个字符数组，然后反向打印出这个词。
//提示：使用strlen()计算数组最后一个字符的索引。
#include <stdio.h>
#include <string.h>
int main (void)
{
    char ch[20];
    int i;
    printf ("Please input the word:\n");
    scanf ("%s",ch);
    i = strlen(ch);
    for (--i;i>=0;i--)
        printf ("%c",ch[i]);
    printf ("\n");
    return 0;
}