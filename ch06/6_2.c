//使用嵌套循环产生下列图案：
//$
//$$
//$$$
//$$$$
//$$$$$
#include <stdio.h>
#include <math.h>
int main(void)
{
    int x,y;
    for (x=0;x<5;x++)
    {
        for (y=0;y<=x;y++)
            printf ("$");
        printf ("\n");
    }
    return 0;
}