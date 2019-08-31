//编写一个程序，要求输入身高和名字，然后以如下形式显示：
//Dabney，you are 175 cm tall
//并且转化成米为单位，再次输出

#include <stdio.h>
int main(void)
{
    float tall_cm;
    char name[10];
    printf ("Please input your name:\n");
    scanf ("%s",name);
    printf ("Please input your tall by cm:\n");
    scanf ("%f",&tall_cm);
    printf ("%s,you are %.1f cm\n",name,tall_cm);
    printf ("%s,you are %.3f m\n",name,tall_cm/100);

    return 0;
}