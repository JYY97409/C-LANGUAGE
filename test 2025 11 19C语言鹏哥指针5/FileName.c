#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu
{
	char name[20];
	int age;
};
void swp(char* p1, char* p2,size_t sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		char temp;
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		p1++;
		p2++;
	}
}
void bubble_sort(void* base, size_t sz, size_t width,int(*cmp)(const void*,const void*) )
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1-i; j++)
		{
			if (cmp( ((char*)base + j * width), ((char*)base + (j + 1) * width) ) > 0)
			{
				swp(((char*)base + j * width), ((char*)base + (j + 1) * width),width);
				//应该传地址，不要解应用
			}
		}

	}

}
int  cmp_stu_by_name(const void* p1, const void* p2)
{
	return strcmp(((struct stu*)p1)->name, ((struct stu*)p2)->name);
}
int  cmp_stu_by_age(const void* p1, const void* p2)
{
	return ((struct stu*)p1)->name - ((struct stu*)p2)->name;
}
//传地址的时候使用char是因为char的长度是一个字节，其他的数据的长度都比它长，在交换的时候仅仅是依次交换即可
int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}
void test2()
{
	struct stu arr[3] = {{"man",25},{"manba",54},{"manbaout",36}};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}
void test1()
{
	int arr[] = { 0,3,2,4,5,2,4,7,8,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), &cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	test1();
	return 0;
}
//void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void *));
// base传的是需要比较的数组的首个元素的地址
// 第二个传的是数组的长度
// 第三个传的是数组数据类型字节形式的长度
// 是四个自己写的比较大小的函数
// 如果左比右大则返回>0小则返回<0,等于则返回0
//int cmp_int(const void* p1, const void* p2)
//{
//	if (*(int*)p1 > *(int*)p2)
//	{
//		return 1;
//	}
//	else if (*(int*)p1 == *(int*)p2)
//	{
//		return 0;
//	}
//	else
//	{
//		return -1;
//	}
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu_by_age(const void* p1, const void* p2)
//{
//	//return (*(struct stu*)p1).age - (*(struct stu*)p2).age;
//	return ((struct stu*)p1)->age - ((struct stu*)p2)->age;
//	//如果是指针，可以直接使用箭头指向，如果是结构体名字，则使用.
//}
//int cmp_stu_by_name(const void* p1, const void* p2)
//{
//	return strcmp((*(struct stu*)p1).name , (*(struct stu*)p2).name);
//	//如果想要变换顺序,交换变量即可
//}
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//void test1()
//{
//	int arr[] = { 0,3,2,4,5,2,4,7,8,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//void test2()
//{
//	struct stu arr[3] = {{"man",25},{"manba",54},{"manbaout",36}};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//}
//int main()
//{
//	test1();
//
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int clac(int (*pa)(int, int))
//{
//	int x = 0, y = 0;
//	printf("请输入两个操作数\n");
//	scanf_s("%d%d", &x, &y);
//	int result = pa(x, y);
//	printf("结果是%d\n", result);
//}
//int main()
//{
//	printf("*************************\n");
//	printf("***** 1.add   2.sub *****\n");
//	printf("***** 3.mul   4.div *****\n");
//	printf("*****     0.exit    *****\n");
//	printf("*************************\n");
//	int x = 0, y = 0;
//	int flag = 0;
//	do
//	{
//		printf("请选择\n");
//		scanf_s("%d", &flag);
//		switch (flag)
//		{
//		case 1:
//			clac(add);
//			break;
//		case 2:
//			clac(sub);
//			break;
//		case 3:
//			clac(mul);
//			break;
//		case 4:
//			clac(div);
//			break;
//		case 0:
//		{
//			printf("退出计算器\n");
//			break;
//		
//		}
//		default:
//			printf("输入错误形式的数字\n");
//		}
//	} while (flag);
//	return 0;
//}