//编写一个程序，该程序要求用户输入天数，然后将该值转换为周数和天数。
//使用一个while循环让用户重复输入天数，当用户输入一个非正数时，程序将终止循环
#include <stdio.h>
int main(void)
{
    int day,week;

    printf ("Please input the days:\n");
    
    while (scanf ("%d",&day) == 1 && day > 0)
    {
        printf ("%d weeks and %d days\n",day/7,day%7);
    }
    return 0;
}