//编写一个程序读取输入，直到#，并报告序列ei出现的次数
#include <stdio.h>

int main(void)
{
    char pre, cur;  //存储前一个字符和当前字符
    int count = 0;

    puts("Enter a string(# to stop): ");

    while((cur = getchar()) != '#')
    {
        if(cur == 'i' && pre == 'e')
            count++;
        else
            pre = cur;
    }

    printf("There are %d 'ei'.\n", count);

    return 0;
}