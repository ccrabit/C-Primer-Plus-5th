//编写一个程序，要求输入名字和姓氏，然后以“名字，形式”的格式打印
#include <stdio.h>
int main(void)
{
    char fname[10],lname[10];

    printf ("Please input your First Name:\n");
    scanf ("%s",fname);
    printf ("Please input your Last Name:\n");
    scanf ("%s",lname);
    printf ("Your name is :\"%s,%s\"\n",fname,lname);

    return 0;
}