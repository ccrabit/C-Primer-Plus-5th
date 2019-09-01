//编写一个程序。累加用户输入的所有数字
#include <stdio.h>
int main(void)
{
    int num,add;
    char ch;
    add = 0;
    printf ("Please input the number:\n");
    
    while (scanf ("%d",&num) == 1)
    {
        add += num;
        printf ("Please input another number:\nInput any word to quit.\n");
    }
    printf ("the sum is %d\n",add);
    return 0;
}