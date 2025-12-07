#include<stdio.h>
//如果你把函数的指针（地址）作为参数传递给另⼀个函数，当这个指针被⽤来调⽤其所指向的函数
//时，被调⽤的函数就是回调函数。回调函数不是由该函数的实现⽅直接调⽤，⽽是在特定的事件或条
//件发⽣时由另外的⼀⽅调⽤的，⽤于对该事件或条件进⾏响应。
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
int main()
{
	int (*pf[5])(int, int) = { NULL,add,sub,mul,div };
	printf("*************************\n");
	printf("***** 1.add   2.sub *****\n");
	printf("***** 3.mul   4.div *****\n");
	printf("*****     0.exit    *****\n");
	printf("*************************\n");
	int x = 0, y = 0;
	int flag = 0;
	do 
	{
		printf("请选择\n");
		scanf_s("%d", &flag);
		if (flag > 0 && flag <= 4)
		{
			printf("请输入两个操作数\n");
			scanf_s("%d%d", &x, &y);
			int result = pf[flag](x,y);
			printf("结果是%d\n", result);
		}
		else if (flag == 0)
		{
			printf("退出计算器\n");
			
		}
		else
		{
			printf("无效的输入\n");
		}
	} while (flag);
	return 0;
}