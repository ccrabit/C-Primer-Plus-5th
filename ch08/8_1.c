#include <stdio.h>
int main (void)
{
    int b[] = {1,2,3};

    int *a = b;
    printf("%d",a[2]);
}