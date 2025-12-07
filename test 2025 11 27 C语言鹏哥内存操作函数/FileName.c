#include<stdio.h>
#include<string.h>
//void* my_memcpy(void* p1, const void* p2, size_t sz)
//{
//	void* ret = p1;
//	for (int i = 0; i < sz; i++)
//	{
//		*((char*)p1 + i) = *((char*)p2 + i);
//	}
//	return ret;
//}
//void* my_memmove(void* str1, const void* str2, size_t sz)
//{
//	char* copy;
//	char* ret = copy;
//	for (int i = 0; i < sz; i++)
//	{
//		*(copy + i) = *((char*)str2 + i);
//	}
//	copy = ret;
//	for (int i = 0; i < sz; i++)
//	{
//		*((char*)str1 + i) = *(copy + i);
//	}
//	return str1;
//}

//复制形式的实现

//1,2,3,4,5,6,7,8,9,10
//void* my_memove(void* p1, const void* p2, size_t sz)
//{
//	void* ret = p1;
//	if (p1 == NULL && p2 == NULL)
//	{
//		return NULL;
//	}
//
//	if (p1 < p2)
//	{
//		for (int i = 0; i < sz; i++)
//		{
//			*((char*)p1 + i) = *((char*)p2 + i);
//		}
//	}
//	else
//	{
//		for (int i = sz - 1; i >= 0; i--)
//		{
//			*((char*)p1 + i) = *((char*)p2 + i);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[] = { 1,2,3,4,5,6,7,8,9,10 };
//	void* ret=my_memove(arr2+3, arr2, 20);
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	memset(arr, 0, sizeof(arr));

	return 0;
}