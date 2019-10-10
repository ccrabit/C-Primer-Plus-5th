#include <stdio.h>
#define D_H 10.00
int main (void)
{
    int hour;
    double wage;
    double tax;
    printf ("Please input:\n");
    scanf ("%d",&hour);
    if (hour < 40)
        wage = (double)hour * D_H;
    else
    {
        wage = 40 * D_H +(double)(hour-40) * D_H * 1.5;
    }
    if (wage <300)
        tax = wage * 0.15;
    else if (wage < 450)
        tax = 300 * 0.15 + (wage-300) * 0.2;
    else
        tax = 300 * 0.15 + 400 * 0.2 + (wage-450) * 0.25;

    printf ("wage : %.3lf;tax : %.3lf;you can get : %.3lf\n",
            wage,tax,wage-tax);
    return 0;
}