#include<stdio.h>
int main()
{
	int arr1[] = {1,2,3,4,5,6,7};
	int arr2[] = {2,3,4,5,6,7,8};
	int arr3[] = { 3,4,5,6,7,8,9, };
	int* parr[3] = {arr1,arr2,arr3};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}
	int a = 10;
	int* pa = &a;
	int* * ppa = &pa;
	//第一个*是说明ppa指向的是指针类型的（及int*类型的）
	//第二个*是说明ppa是指针变量
	//二级指针变量也是变量（储存指针变量的）
	return 0;
}



//void bubble_sort(int arr[], int sz)
//{
//	int temp = 0;
//	for (int i = 0; i < sz; i++) 
//	{
//		int flag = 1;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//				flag = 0;
//			}	
//		}
//		if (flag == 1)
//		{
//			break; 
//			}
//	}
//}
//void printf_arr(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,8,5,9,10,12,312,23,14,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	printf_arr(arr, sz);
//	return 0;
//}

////sizeof(数组名)，sizeof中单独放数组名，这⾥的数组名表⽰整个数组，计算的是整个数组的⼤⼩，
////单位是字节
////& 数组名，这⾥的数组名表⽰整个数组，取出的是整个数组的地址（整个数组的地址和数组⾸元素
////的地址是有区别的）
//void test(int arr[])//本质是个指针
//{
//	//所以传参的时候，传的是地址，在函数内部是没有arr这个数组的，故不可以在函数中求出数组的长度
//	//在函数中只有数组的地址，使用arr[i]实际上是先转为地址再进行运算（使用的还是原来的数组）
//	//在这里和传递变量有显著的差别，传递变量实际上是在主函数的栈帧之上复制两个值传进去
//	// 所以当传的是变量的时候，在函数中改变传过去的值实际上是在改变那两个复制的值
//	//  但是主函数中的值并没有被改变
//	// 但是传的是数组就不一样了
//	//	在函数中使用的时候，是直接调用原数组的地址，所以可以直接改变原数组（及形参和实参实际上是在一个地址）
//	//并不是数组
//	//这个键盘好啊，what can i say
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz2=%d\n", sz2);
//
//}
//int main()
//{
//	int arr[10] = {0};
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz1=%d\n", sz1);
//	test(arr);
//	//在这里是一个地址，并非是数组，接受的形式应该是int*,表达形式是int arr[]仅是方便理解
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	//int* p=&arr[0]
//	for (i = 0; i < sz; i++)
//	{
//		scanf_s("%d", p + i);
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		//arr+i==arr[i]从数组中的第一个元素开始跳过了i个元素
//	}
//	//arr是一个地址常量，可以+1-1，但是不可以++/--（因为++/--是要改变的）
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("arr     = %p\n", arr);
//	printf("arr+1     = %p\n", arr+1);
//
//	printf("&arr    = %p\n", &arr);//它是数组指针类型（int(*)[10]）
//	printf("&arr+1  = %p\n", &arr+1);
//
//	printf("&arr[0] = %p\n", &arr[0]);
//	printf("&arr[0]+1 = %p\n", &arr[0]+1);
//	//数组的地址和变量的地址一样都是头一个字节的地址，因为可以通过数量来依次往后取
//
//	return 0;
//}