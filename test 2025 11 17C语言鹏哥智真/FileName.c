#include<stdio.h>
typedef unsigned int nuit;
typedef unsigned long long nul;
typedef int* pint;
typedef int(*parr_t)[];
typedef void(*type_t)(int);
//可以省事
#define PINT int*
void what(int x)
{

}
int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	pint p1, p2, p3;
	int (*p)[] = &arr;
	//==
	parr_t p1 = &arr;
	int i = 0;
	(*((void(*)())0))();
	//将0强制类型转换为一个函数的地址，这个函数类型是void,没有参数，然后解应用他，依然没有参数
	//0地址处放这一个
	type_t*signal(int,type_t);
	//void(*)(int)是函数返回类型
	void* p = signal(i, what);
	return 0;
}
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int x = 1, y = 2;
//	printf("%p\n", &ADD);
//	printf("%p\n", ADD);
//	//&地址函数名和函数名是一样的
//	int(*p)(int, int) = ADD;
//	int r1 = (p)(x, y);  
//	int r2 = (*ADD)(x, y);
//	//函数名实际上就是一个函数指针变量，在调用的时候,*name相当于是解应用name这个指针变量
//	//直接使用就相当于是使用name这个函数
//	//函数调用的第二种方法
//	printf("%d", r1);
//	//第一个int代表的是返回的类型,(*)代表是函数指针,括号是为了防止*P先与后面的括号结合，
//	return 0;
//}
//void print(int (*p)[5], int r, int c)
//{
//	//二维数组传参的本质，传的是每一行的地址，在解应用后是每一行第一个元素的地址，
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			//printf("%d",p[i][j])
//		}
//		printf("\n");
//
//	}
//
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	int arr[7] = { 1,2,3,4,5,6,7 };
//	int* p = arr;
//	//一级指针,存的仅仅是数组的地址,又因为数组名就是指针，所以可以直接使用
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}