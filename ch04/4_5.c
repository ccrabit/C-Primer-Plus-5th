//编写一个程序，首先要求用户输入名字，然后要求用户输入姓氏。
//在一行打印输入的姓名，在下行打印每个名字中的字母的个数，
//要求字母的个数与相应名字的结尾对齐，然后在打印一次并且开头对齐
#include <stdio.h>
#include <string.h>

int main(void)
{
    char fname[10],lname[10];
    int num_fname,num_lname;

    printf ("Please input you first name:\n");
    scanf ("%s",fname);
    printf ("Please input you last name:\n");
    scanf ("%s",lname);
    num_fname = strlen(fname);
    num_lname = strlen(lname);

    printf ("The result is \n");
    printf ("%s %s\n",fname,lname);
    printf ("%*d %*d\n",num_fname,num_fname,num_lname,num_lname);

    printf ("The other result is \n");
    printf ("%s %s\n",fname,lname);
    printf ("%-*d %-*d\n",num_fname,num_fname,num_lname,num_lname);

    return 0;
}