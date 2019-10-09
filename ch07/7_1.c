//编写一个程序。该程序读取输入直到遇到#字符，
//然后报告读取的空格数目、读取的换行符数目以及读取的所有其它字符数目
#include <stdio.h>
int main (void)
{
    int num_LF=0,num_space=0,num_other=0;
    char ch;
    printf ("Please input:\n");
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            num_space++;
        else if (ch == '\n')
            num_LF++;
        else 
            num_other++;
    }
    printf ("LF : %d\nSP : %d\nother : %d\n",num_LF,num_space,num_other);
    return 0;
}