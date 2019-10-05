//编写一个程序，创建一个具有26个元素的数组，并在其中储存26个小写字母。
//并让该程序显示该数组的内容
#include <stdio.h>
#include <math.h>
int main(void)
{
    char words[26];
    int i = 0;
    
    for(i = 0 ; i < 26 ; i++)
    {
        words[i] = 'a' + i;
        printf ("%c",words[i]);
    }
    printf ("\n");
    return 0;
}