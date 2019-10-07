//Daphne以10%的单利息投资了100美元
//Deirdre以每年5%的复利投资了100美元
//计算Deirdre需要多少年投资额才能超过Daphne，并显示那时两人的投资额。
#include <stdio.h>
int main (void)
{
    const double acc_Da = 0.1;
    const double acc_De = 0.05;
    double Da,De;
    int year=0;
    Da = 100.0;
    De = 100.0;
    while (Da >= De)
    {
        De *= 1+acc_De;
        Da += 100 * acc_Da;
        year++; 
    }
    printf ("%d years later,Deirdre morethan Daphne\n",year);
    printf ("Deirdre has %.3lf ,Daphne has %.3lf\n",De,Da);
    return 0;
}