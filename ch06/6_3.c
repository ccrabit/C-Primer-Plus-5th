//使用嵌套循环产生下列图案：
//F
//FE
//FED
//FEC
//FEDCB
//FEDCBA
#include <stdio.h>
#include <stdio.h>
int main(void)
{
    char ch;
    int i;
    for (i=0;i<6;i++)
    {
        for (ch='F' ;ch >= ('F'- i);ch--)
            printf ("%c",ch);
        printf ("\n");
    }
    return 0;
}