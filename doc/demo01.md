# 类模板函数的分文件编写

编译器在实例化一个类时，需要知道该类的所有确定的信息，如果是普通的类这是完全由头文件`.h`中类的声明决定的。但是对于模版类，此信息不确定，于是编译器只是存放一个符号，而把这一个步骤放到最后链接时来完成。而编译器在编译模版类的实现文件`.cpp`时没有发现其他地方有这个类的实例化。最终，到链接阶段找不到类模版的实例，出错。

(**貌似是VS中的编译器，不知道g++/gcc的编译器是不是这个情况**)测试过了，也是ubuntu下使用g++/gcc也是一样的问题。

建议是使用`.hpp`文件放在一个文件里面进行编写。这样使用是一定没有问题的。
### 测试分文件编写也行

1. `.h`文件中仅仅声明，`.cc`文件定义必须指定数据的具体类型才行。否则编译器保存。
2. `.h`文件中有定义，分文件编写中的就**相当于没有定义**。
3. 还有ubuntu cmake环境下直接包含`.cc`文件有报错。有说`main`中直接`#include <.cpp`>文件也行的没测试。