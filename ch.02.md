# ch.02

1. 如何称呼C程序的基本模块？
函数
2. 什么是语法错误？
违背了如何把语句或者程序放在一起的规则
3. 什么是语义错误？
含义上的错误
4. 修改下面的程序
```
include stdio.h
int main {void} /* 该程序可显示出一年有多少周 /*
(
int s
s: = 56;
print (There are s weeks in a year.);
return 0;
```

5. 假设下面的每一个例子都是某个完整程序的一部分，它们每个将输出什么结果？
```c
printf ("Baa Baa Black Sheep");
printf ("Have you any wool?\n");
```
```
Baa Baa Black SheepHave you any wool?

```

```c
printf ("Begone!\nO creature of lard!");
```
```
Begone!
O creature of lard!
```

```c
printf ("What?\nNo/nBonzo?\n");
```
```
What?
No/nBonzo?

```

```c
int num;
num = 2;
printf ("%d + %d = %d",num.num.num+num);
```
```
2 + 2 = 4
```


6. 下面那几个是C的关键字？
```c
main int function char =
```
```c
int char
```
7. 如何以下面的格式输出words和lines的值：“There were 3020 words and 350 lines”?这里，3020和350代表两个变量的值。
```c
#include <stdio.h>
int main (void)
{
  int words,lines;
  words = 3020;
  lines = 350;
  printf ("There were %d words and %d lines",words,lines);
  return 0;
}
```

8. 考虑下面的程序：
```c
#include <stdio.h>
int main (void)
{
  int a,b;

  a = 5;
  b = 2;//第7行
  b = a;//第8行
  a = b;//第9行
  printf ("%d %d\n",a,b);
  return 0;
}
```

请问在第7行，第8行和第9行之后程序的状态分别是什么？
```
7: a=5,b=2
8: a=5,b=a=5
9: a=b=5,b=5
printf: 5 5
```
