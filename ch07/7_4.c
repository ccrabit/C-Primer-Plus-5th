//利用if else 语句编写程序读取输入，直到#。
//用一个感叹号代替每一个句号，将原有的每个感叹号用两个感叹号代替，
//最后报告进行了多少次代替
#include <stdio.h>
#define SIZE 101

int main(void)
{
    int idx = 0, count = 0;
    char ch, str[SIZE];

    puts("Enter a string(less than 100 charactors and ended in '#'): ");

    while((ch = getchar()) != '#')
    {
        if(ch == '.')
        {
            ch = '!';
            count++;
            str[idx] = ch;
            idx++;
        }
        else if (ch == '!')
        {
            count++;
            str[idx] = '!';
            idx++;
            str[idx] = '!';
            idx++;
        }
        
        
    }

    str[idx] = '\0';

    puts(str);
    printf("Replace times: %d\n", count);

    return 0;
}