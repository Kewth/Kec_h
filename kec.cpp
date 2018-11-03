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
	int k;
END

dec(void, example1()) // 声明函数
dec(void, example2())

START = 0; // START 是程序（主函数）开始处，=0 是程序返回值的初始值
	var testtyp = 0; // var 定义一个变量，需要初始化 (javascript)
	std::vector<int> v; // 否则用 C++ 的兼容写法
	input testtyp; // input 表示输入，若有多个用 _i 连接
	IF testtyp == 0 then // IF 表示分支“如果”，后接 then 表示分支开始
		output "hello" _o "world!"; // 用 _o 连接多个输出，自动以空格隔开
		res = 0; // res 表示函数返回值，此处是程序返回值
	ELIF testtyp == 1 then // 用 ELIF 表示下一个条件语句，同用 then 表示开始
		test(); 
	ELIF testtyp == 2 then // ELSE 表示分支“否则”
		output sum(1,2);
	ELSE
		pass // pass 表示待完成的地方 (python)
	FI
	output argv; // argv 表示主函数参数数量，主函数参数为 argc
ENDF // 程序结束，返回值 res

// 循环
voidef(example1())
	int q = 10;
	WHI q -- LE // while 循环条件以 WHI 开始，以 LE 结束
		output "test1";
	END
	q = 10;
	DO
		output "test2";
		q --;
	UNT q == 0 ILE; // do..until() 循环
	FOR(int i=0;i<100;i++) // for 循环
		output "test3";
	END
	IFOR(int i=0;i<100;i++) // 只有一条语句的 for 循环
		just output "test3"; // 以 just 开头
END

// 输出
voidef(example2())
	output "A" _o "B\n"; // 输出以空格隔开
	output "A" _oo "B\n"; // 输出相邻没有空格
	output "A" _o "B" _oc; // _oc 表示输出以回车结束
END
