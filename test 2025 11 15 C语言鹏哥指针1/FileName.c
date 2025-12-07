#include<stdio.h>
int main()
{
	int a = 10;
	char c = 'w';
	void* pa = &a;
	pa = &c;
	return 0;
}
//void类型的指针可以储存所有类型的地址
//但是它不能被直接解应用，加减
//why? 就像是他没有一定的单位
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	char* pc = &a;
//	printf("pa=%p\n", pa);
//	printf("pc=%p\n", pc);
//	pa = pa + 1;//跳了1个整形
//	pc = pc + 1;//跳了1个字符
//	printf("pa=%p\n", pa);
//	printf("pc=%p\n", pc);
//	//指针是用来访问内存的，类型更像是一个单位，在移动和调用的时候起效的
//	return 0;  
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char c = 'w';
//	char* pc = &c;
//	//指针变量
//	//int是指pa指向的是int类型的
//	//*表示他是指针变量
//	//地址是一个编号，不需要存起来
//	//而指针变量就是专门用来存放地址（指针）的变量
//	
//	//*就是解引用操作符(相当于是找到了指针对应的值，顺藤摸瓜)
//	
//	*pa = 100;
//	printf("%d\n", a);
//	printf("%p\n", &*pa);
//	printf("%zu\n", sizeof(pa));
//	printf("%zu\n", sizeof(pc));
//	//指针变量的大小只需要存放下一个地址就行
//	//在64位的环境下，64个地址总线表示了一个地址
//	//而4个字节是一个字符
//	//所以在64位环境下，指针变量的长度是8
//	return 0;
//}

//int main()
//{
//	int a = 0x11121314;
//	char* pa = &a;
//	*pa = 0;
//	return 0;
//	//指针类型决定了在解应用的时候有多大的权限
//	//int类型的有4个字符的权限
//	//char类型的有1个字符的权限
//}