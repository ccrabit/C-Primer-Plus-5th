//温度转换
#include <stdio.h>
void Temperatures(double f);
int main(void)
{
    double f;
    printf ("Enter the temperature (q to quit):\n ");
    while (scanf ("%lf",&f) == 1)
    {
        Temperatures (f);
        printf ("Enter another temperature:\n");
    }
    return 0;
}

void Temperatures(double f)
{
    const double c1 = 1.8;
    const double c2 = 32.0;
    const double k1 = 273.16;

    double C,K;
    C = c1 * f + c2;
    K = f + k1;

    printf ("Celsius :%lf\nKelvin :%lf\n",C,K);
}