# ch.01


1. _**就编程而言，可移植性表示什么？**_

- 可移植性好，代表着在一个系统上编写的程序，能够在经过较少改动甚至不改动的情况下，在其他系统上运行。

2. **_解释源代码文件、目标文件和可执行文件之间的区别。_**

- 源代码中只有直接编写的程序。

- 目标文件中只包含有所编写程序转换成的机器语言。

- 可执行文件包括目标文件中的内容和所使用的的库例程以及启动代码的机器代码。

- 源代码文件中包含着程序员所使用的人和语言编写的代码。

- 目标代码文件包含着机器语言代码，他并不需要时完整的程序代码。

- 可执行文件包含着组成可执行程序的全部机器语言代码。
3. **_编程的7个主要步骤是什么？_**
+ 定义程序目标
+ 设计程序
+ 编写代码
+ 编译
+ 运行程序
+ 测试和调试程序
+ 维护和修改程序
4. _**编译器的任务是什么？**_
- 将所编写的源代码文件，转换成机器语言代码
5. _**链接器的任务是什么？**_

- 将目标代码、系统的标准启动代码和库代码集合到一起，并将他们存放在单个文件，即可执行文件中。对于库代码而言，链接器只从库中提取所使用的的函数所需要的代码。

- 链接器把多个来源(例如，已编译的源代码、库代码和启动代码)的目标代码连接成一个单独的可执行程序。