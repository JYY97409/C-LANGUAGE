#include<stdio.h>
#include <string.h>


int main()
{
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* ptr1 = (int*)(&aa + 1);
	int* ptr2 = (int*)(*(aa + 1));
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}

////假设环境是x86环境，程序输出的结果是啥？
//
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	//a实际上的类型是int(*)[5]，指向含有 5 个整数的数组的指针。
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//  -4
//	//10000000 00000000 00000000 00000100
//	//11111111 11111111 11111111 11111011
//	//11111111 11111111 11111111 11111100
//	//  F   F    F   F   F    F    F   C
//	//FFFFFFFC
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	//逗号表达式（从左向右执行，返回值是最后执行的值）
//	//太阴了！！！！！！！！！！！！！！！！！！！！！
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}



//在X86环境下 1
//假设结构体的⼤⼩是20个字节
//程序输出的结果是啥？
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	//转成整形+1就是+1
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//!!!
//	//类型是int(*)5
//	printf("%d\n%d", *(a + 1), *(ptr - 1));
//}


//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48 数组名单独放在sizeof里
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16 第一行！！！就像是函数名单独使用时是它本身，此处代表的是第二行，可以代表第一行的大小
//	printf("%d\n", sizeof(a[0] + 1));//8 a[0][0]的地址+1是a[0][1]的地址 
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//8 a是第一行的地址，加1是第二行的地址
//	// int(*)[4]
//	printf("%d\n", sizeof(*(a + 1)));//16 //接应用是数组名
//	// *(a + 1)==a[1]
//	printf("%d\n", sizeof(&a[0] + 1));//8 是第一行的地址+1是第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16 解应用第一行的地址
//	printf("%d\n", sizeof(a[3]));//16//sizeof的表达式不会真实计算，只会推断
//	return 0;
//}
//二维数组可以视为由诸个一维数组为元素组成的一维数组，在读取行的时候，实际读的是这个行上的一维数组

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//编译错误
//	//printf("%d\n", strlen(p[0]));//编译错误
//	printf("%d\n", strlen(&p));//未知数
//	printf("%d\n", strlen(&p + 1));//未知数
//	printf("%d\n", strlen(&p[0] + 1));//5
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";//p是指针变量
//	printf("%d\n", sizeof(p));//8
//	printf("%d\n", sizeof(p + 1));//8
//	printf("%d\n", sizeof(*p));//1 p的类型是char*，解应用只能访问1个字个个节
//	printf("%d\n", sizeof(p[0]));//1
//	printf("%d\n", sizeof(&p));// 8 &p是指针变量的地址，是一个二级指针变量，但是依然是一个地址
//	printf("%d\n", sizeof(&p + 1));//8
//	printf("%d\n", sizeof(&p[0] + 1));//8
//	return 0;
//}



//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//报错
//	//printf("%d\n", strlen(arr[1]));// 报错
//	printf("%d\n", strlen(&arr));//6 &arr的值是首元素的地址
//	printf("%d\n", strlen(&arr + 1));//未知数，是跳过数组后的地址
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}


//在数组和类似数组的指针中，&数组+1就是跳过这个数组，因为这个指针代表的是这个数组，那么这个指针的单位就是这个数组的单位，+1是按照指针的单位来计算的
//所以+1即使跳过整个数组



//int main()
//{
//	char arr[] = "abcdef";//像这样的输入方式，在最后都有一个\0
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//	return 0;
//}

//数组名在取地址的时候sizeof里是代表整个数组
//其他的时候都是首元素的地址

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//未知数，不知在何时找到\0
//	printf("%d\n", strlen(arr + 0));//未知数，不知在何时找到\0
//	printf("%d\n", strlen(*arr));//arr是一个值，而strlen要的是地址‘a’==97,strlen会从97往后读取，这个地址在哪就不知道了
//	printf("%d\n", strlen(arr[1]));//同上
//	printf("%d\n", strlen(&arr));//未知数，不知在何时找到\0
//	printf("%d\n", strlen(&arr + 1));//未知数，不知在何时找到\0
//	printf("%d\n", strlen(&arr[0] + 1));//未知数，不知在何时找到\0
//	return 0;
//}
// 
// 
//int main()
//{
//	int a[] = { 1,2,3,4 ,5,6,7 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a + 0));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a + 1));
//	printf("%d\n", sizeof(a[1]));
//	printf("%d\n", sizeof(&a));
//	printf("%d\n", sizeof(*&a));
//	printf("%d\n", sizeof(&a + 1));
//	printf("%d\n", sizeof(&a[0]));
//	printf("%d\n", sizeof(&a[0] + 1));
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("zu\n", sizeof a);
//	printf("zu\n", sizeof( a ));
//	printf("zu\n", sizeof(int));
//	//sizeof只是一个操作符，只关注后面的变量在内存中占了多少内存，
//	//如果在后面是一个表达式，它并不会实际计算，而是推断计算出来是啥类型
//	return 0;
//}