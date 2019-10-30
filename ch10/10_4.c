#include <stdio.h>
int main (void)
{
    int num[10] = {23,541,12,212,53,4356,346,234,546,78};
    int * max = num;
    int i;
    for (i = 0;i < 10;i++){
        if (*max < num[i])
            max = &num[i];
    }
    printf ("MAX : %d\n",*max);
    printf ("NO.%ld\n",max-num);
    return 0;
}