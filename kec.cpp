#include "kec.h" // 必须且仅仅使用的头文件

voidef(test()) // 定义无返回值的函数
	output _o "TEST!"; // output 表示输出，用 _o 连接
end // 函数结束

linedef(int, sum(int a, int b)) = a + b; end // 单行函数标准写法

START = 0; // 程序（主函数）开始处，=0 是程序返回值的初始值
	var testtyp = 0; // var 定义一个变量，需要初始化 (javascript)
	varr(int) a; // 如果不初始化，用 varr() 来声明变量
	input _i testtyp; // input 表示输入，用 _i 连接
	IF testtyp == 0 then // IF 表示分支“如果”，后接 then 表示分支开始
		output _o "hello " _o " world!";
		res = 0; // res 表示函数返回值，此处是程序返回值
	ELIF testtyp == 1 then // 用 ELIF 表示下一个条件语句，同用 then 表示开始
		call(test()); // call() 调用函数
	ELIF testtyp == 2 then // ELSE 表示分支“否则”
		output _o call(sum(1,2));
	ELSE
		pass // pass 表示待完成的地方 (python)
	FI
	output _o argv; // argv 表示主函数参数数量，主函数参数为 argc
endfunc // 函数结束，返回值 res
