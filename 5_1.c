//编写一个程序。将用分钟表示的时间转换成以小时和分钟表示的时间。
//使用#define或者const来创建一个代表60的符号常量。
//使用while循环来允许用户重复键入值，并且当键入一个小于等于0的时间时终止循环
#include <stdio.h>
#define TIMETOGO 60
int main(void)
{
    long time ;
    
    printf ("Please input the minutes:\n");
    while (scanf ("%ld",&time) == 1 && time > 0)
    {  
        printf ("%ld h and %ld minutes\n",time/TIMETOGO,time%TIMETOGO);
        printf ("Please input again or input any number less zero to quit\n");
    }
    return 0;
}