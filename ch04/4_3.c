//编写一个程序，读取一个浮点数，并且首先以小数点记数法，然后以指数记数法打印之。
//输出使用以下形式：
//  a.The input is 21.3 or 2.1e+001
//  b.The input is 21.290 or 2.129E+001

#include <stdio.h>
int main(void)
{
    printf ("The input is %2.1f or %.1e\n",21.29,21.29);
    printf ("The input is %2.3f or %.1E\n",21.29,21.29);

    return 0;
}