#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct num
{
	int a;
	int arr[];
};
int main()
{
	struct num* arr = malloc(sizeof(struct num));
	//只申请了int类型a的值
	struct num* ret = NULL;
	ret = realloc(arr, sizeof(struct num) + 5 * sizeof(int));
	if (ret != NULL)
	{
		arr = ret;
	}
	return 0;
}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* ptr = (int*)malloc(100);
//	if (ptr != NULL)
//	{
//		//业务处理
//	}
//	else
//	{
//		return 1;
//	}
//	//扩展容量
//	//代码1 - 直接将realloc的返回值放到ptr中
//	ptr = (int*)realloc(ptr, 1000);//这样可以吗？(如果申请失败会如何？)
//	//代码2 - 先将realloc函数的返回值放在p中，不为NULL，在放ptr中
//	int* p = NULL;
//	p = realloc(ptr, 1000);
//	if (p != NULL)
//	{
//		ptr = p;
//	}
//	//业务处理
//	free(ptr);
//	return 0;
//}

//void GetMemory(char* p)
//{
//    p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(str);
//    strcpy(str, "hello world");
//    printf(str);
//}
//
//int main()
//{
//    Test();
//    return 0;
//}

//int main()
//{
//	//例如我们想申请arr[3][5]的空间
//	int** arr = (int**)malloc(3 * sizeof(int*));
//	if (arr == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		*(arr + i) = (int* )malloc(5 * sizeof(int));
//		if (*(arr + i) == NULL)
//		{
//			perror("malloc-2");
//			for (int j = i; j >= 0; j--)
//			{
//				free(*(arr + j));
//			}
//			free(arr);
//			return 1;
//		}
//		
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		free(*(arr + i));
//	}
//	free(arr);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy_s(str,100, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy_s(str,100, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
////经典问题：返回栈区空间


//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy_s(str,100, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy_s(str,100, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}


//柔性数组

//
//struct S
//{
//	int n;
//	int arr[];
//};
//int main()
//{
//	printf("%zu\n",sizeof(struct S));
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	printf("%zu\n", sizeof(*ps));
//
//	return 0;
//}

//struct S
//{
//	int n;
//	int arr[];
//};
//
//int main()
//{
//	struct S* pa = (struct S*)malloc(sizeof(struct S));
//	if (pa == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	pa = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	if (pa == NULL)
//	{
//		perror("malloc - 2");
//		return 1;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		pa->arr[i] = i + 1;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d",pa->arr[i]);
//	}
//	printf("\n");
//	struct S* pret = NULL;
//	pret = realloc(pa, sizeof(struct S) + 10 * sizeof(int));
//	if (pret == NULL)
//	{
//		perror("realloc");
//		return 1;
//	}
//	else
//	{
//		pa = pret;
//		pret = NULL;
//	}
//	for (int i = 5; i < 10; i++)
//	{
//		pa->arr[i] = i + 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d", pa->arr[i]);
//	}
//	printf("\n");
//	free(pa);
//	return 0;
//}


//创建一个指针变量是存在栈区中的，栈区的数据是存在生命周期的，所以我们不能在释放堆区的数据之前让指向它的指针释放

