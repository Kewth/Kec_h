这是神奇的Ke-C++.

示例代码:
```cpp
#include "kec.h" // 必须且仅仅使用的头文件

voidef(test()) // 定义无返回值的函数
	output "TEST!"; // output 表示输出
END // 函数结束

// 函数的参数类型前需要加 C_
linedef(int, sum(C_int a, C_int b)) = a + b; END // 单行函数 a+b 标准写法

def(int, cheng(C_int a, C_int b)) = 1; // 定义有返回值的函数并初始化为 1
	res *= a; // res 表示函数返回值
	res *= b;
ENDF // 函数结束，返回值 res，此处即 a*b

// 定义一个类
CLASS(A)
public:
	va(int) k;
END

// 继承一个类时需要在类名前加 C_
CLASS(B: C_A)
END

dec(void, point()) // 声明函数

START = 0; // START 是程序（主函数）开始处，=0 是程序返回值的初始值
	var testtyp = 0; // var 定义一个变量，需要初始化 (javascript)
	va(int) a; // 如果不初始化，用 va() 来声明变量，仅适用于自定义类或 Kec 内置数据类型
	std::vector<va(int)> v; // 否则用 C++ 的兼容写法
	input testtyp; // input 表示输入，若有多个用 _i 连接
	IF testtyp == 0 then // IF 表示分支“如果”，后接 then 表示分支开始
		output "hello " _o " world!"; // 用 _o 连接多个输出
		res = 0; // res 表示函数返回值，此处是程序返回值
	ELIF testtyp == 1 then // 用 ELIF 表示下一个条件语句，同用 then 表示开始
		call(test()); // call() 调用函数
	ELIF testtyp == 2 then // ELSE 表示分支“否则”
		output call(sum(1,2));
	ELSE
		pass // pass 表示待完成的地方 (python)
	FI
	output argv; // argv 表示主函数参数数量，主函数参数为 argc
ENDF // 程序结束，返回值 res

voidef(point())
	va(int) *p = new va(int)(666); // 定义指针
	const va(int) N = 0; // 定义常量
	delete p;
END
```

内置的数据类型：  
- int: 即int
- long: 即long long
- char: 即char
- str: 即 std::string

完全兼容 C++, 你甚至可以混起来写。
