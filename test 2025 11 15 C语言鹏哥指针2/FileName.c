//#define NDEBUG
#include<stdio.h>
#include<assert.h>；

void Swep(int* pa, int* pb)
{
	assert(pa != NULL && pb != NULL);
	int c = 0;
	c = *pa;
	*pa = *pb;
	*pb = c;
}
//传值调用和传址调用的差别，传值是创建一个临时拷贝，在函数中修改不会影响原来的值
//传址调用不一样了，可以直接通过*地址直接修改原来的值
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d%d", &a, &b);
	printf("交换前：a=%d b=%d\n", a, b);
	Swep(&a, &b);
	printf("交换后：a=%d b=%d\n", a, b);

	return 0;
}
//size_t my_strlen1(const char* p)
//{
//	char* p1 = p;
//	size_t n = 0;
//	assert(p != NULL);
//	while (*p != '\0')
//	{
//		p++;
//	}
//	n = p - p1;
//	return n;
//}
//int main()
//{
//	char arr[] = "accsagfcghBHC";
//	size_t len = my_strlen1(arr);
//	printf("%zu\n", len);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int* p = &arr[0];
//	assert(p != NULL);
//	for ( i = 0; i < 9; i++)
//	{
//		*(p++) = i;
//	}
//	p = NULL;//使用完将指针置为空
//	assert(p != NULL);
//	printf("hehe\n");
//	return 0;
//}

//int* arr()
//{
//	int m = 10;
//	printf("%d ", m);
//	return &m;
//}
////在函数中创建的临时变量在函数进程结束的时候就已经被释放
////但是为啥打印出来了呢
////函数销毁是将该语句标记为可覆盖，此时恰好没有被覆盖
////指针初始化的时候，实在不行可以使用NULL来表示指针没有地址，防止指针是一个随机值
//int main()
//{
//	int* m = arr();
//	printf("%d ", *m);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 11; i++)
//	{
//		printf("%d ", arr[i]);
//		//野指针
//	}
//	return 0;
//}
//int main()
//{
//	const int n = 10;
//	int*const p = &n;
//	//如果在int*前面加一个const，*p的值就不能被修改了（也就是不能通过*p来修改n）
//	*p = 0;
//	//如果在int*后面加一个const,p的值就不能被修改了（因为p实际上是一个变量）
//	//const可以在左右都放
//	printf("%d\n", n);
//	return 0;
//}
//size_t my_strlen(char*p)
//{
//	size_t n = 0;
//	while (*p != '\0')
//	{ 
//		p++;
//		n++;
//	}
//	return n;
//}
//size_t my_strlen1(char* p)
//{
//	char* p1 = p;
//	size_t n = 0;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	n = p - p1;
//	return n;
//}
//void Printf(char* p, int sz,char arr[])
//{
//	char* p1 = p;
//	while (p < p1 + sz)
//	{
//		printf("%c ", *p);
//		p++;
//	}
//}
//int main()
//{
//	char arr[] = "abcdefgbvshcvasgu";
//	size_t n = my_strlen(arr);
//	//传导的是头一个元素，故可以使用指针来接收
//	//数组的指针之所以在传递的时候穿的是他的第一个字符的地址，是因为字符串的字符类型是固定的
//	//只需要传递一个，电脑就可以以此类推，从而表示其他的地址
//	//指针减指针是整数可以理解为那个整数是一个差值
//	size_t n1 = my_strlen1(arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%zu\n", n);
//	printf("%zu\n", n1);
//	Printf(arr, sz,arr);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//在同一个空间内，两个地址相减的时候，返回的是他们中间相隔的个数（类比加法）
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *p--);
//		//后缀--是先使用再--
//	}
//	return 0;
//}