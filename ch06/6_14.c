//编写一个程序读入一行输入，然后反向打印该行。
#include <stdio.h>
#include <string.h>
int main (void)
{
    char ch[20];
    int i;
    printf ("Please input:\n");
    scanf ("%s",ch);
    i = strlen(ch);
    for (;i>=0;i--)
        printf ("%c",ch[i]);
    printf ("\n");
    return 0;

}