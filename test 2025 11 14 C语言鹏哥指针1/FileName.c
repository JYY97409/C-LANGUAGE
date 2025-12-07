#include<stdio.h>
int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d\n", ret);
	printf("%d\n", i);
	return 0;
}
//尝试在linux 环境gcc编译器，VS2013环境下都执⾏，看结果。

//int fun()
//{
//	static int n = 1;
//	return ++n;
//}
//// 2 3 4 5 6 
//int main()
//{
//	int n = fun() + fun() * fun();
//	//算数符号的优先级只能分辨它自身的先后顺序，并不能分辨函数调用的先后顺序
//	printf("%d", n);
//	return 0;
//}