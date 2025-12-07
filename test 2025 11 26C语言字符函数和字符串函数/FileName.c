#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//int main()
//{
//	char str[] = "abcdefg";
//	int num = my_strlen(str);
//	printf("%d\n", num);
//	return 0;
//}
//char* my_strcpy(char* arr, const char* copy)
//{
//	if (arr == NULL && copy == NULL)
//	{
//		return NULL;
//	}
//	char* re_arr = arr;
//	while (*copy != '\0')
//	{
//		*arr = *copy;
//		copy++;
//		arr++;
//	}
//	*arr = *copy;
//	return re_arr;
//}


//char* my_strcpy(char* arr, char* copy)
//{
//	if (arr == NULL && copy == NULL)
//	{
//		return NULL;
//	}
//	char* ret = arr;
//	while (*arr++ = *copy++)
//	{
//
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "absc";
//	char arr2[20] ;
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//char* my_strcat(char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* ret = p1;
//	while (*p1 != '\0')
//	{
//		p1++;
//	}
//	while (*p2 != '\0')
//	{
//		*p1 = *p2;
//		p1++;
//		p2++;
//	}
//	*p1 = *p2;
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	char* ret = my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", ret);
//	return 0;
//}

//int my_strcmp(const char* p1, const char* p2)
//{
//	while (*p1 != '\0' && *p2 != '\0')
//	{
//		if (*p1 - *p2 != 0)
//		{
//			return (int)*p1 - (int)*p2;
//		}
//		p1++;
//		p2++;
//	}
//	return (int)*p1 - (int)*p2;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "abcdefh";
//	int flag = my_strcmp(arr1, arr2);
//	printf("%d\n", flag);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello\0---------";
//	char arr2[] = "whatxxxxxxxxxxxx";
//	strncat(arr1, arr2, 4);
//	printf("%s", arr1);
//	return 0;
//}

//char* my_strstr(const char* p1, const char* p2)
//{
//	if (strlen(p1) < strlen(p2))
//	{
//		return NULL;
//	}
//	char* ret1=p1;
//	char* ret2 = p2;
//	char* ret = NULL;
//	int flag = 1;
//	while (*p1 != '\0')
//	{
//		if (*p1 == *p2&&flag==1)
//		{
//			ret = p1;
//			flag = 0;
//			p2++;
//		}
//		if (*p2 == '\0'&&flag==0)
//		{
//			return ret;
//		}
//		if (*p1 == *p2&&flag==0)
//		{
//			while (*p2 != '\0')
//			{
//				if (*p1 != *p2)
//				{
//					flag = 1;
//					p2 = ret2;
//					p1 = ret1;
//				}
//			}
//			if (flag == 0)
//			{
//				return ret;
//			}
//			
//		}
//		p1++;
//		
//	}
//	return NULL;
//}

//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* cp = str1;
//	while (*cp)
//	{
//		const char* p1 = cp;
//		const char* p2 = str2;
//		while (*p1 == *p2 && *p1 != '\0' && *p2 != '\0')
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//
//int main()
//{
//	char arr1[] = "bbcshisb";
//	char arr2[] = "shi";
//	char* flag = my_strstr(arr1, arr2);
//	if (flag != NULL)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	printf("%s", flag);
//	return 0;
//}


//int main()
//{
//	for (int i = 1; 1 <= 10; i++)
//	{
//		printf("%s\n", strerror(i));
//	}
//	return 0;
//}


int main()
{
	FILE* file;
	FILE* file1;
	file1=fopen_s(file, "a.text", "r");
	if (file1 == NULL)
	{
		printf("%s\n", strerror(errno));
		printf("文件打开失败\n");
	}
	else
	{
		printf("成功打开\n");
	}
	return 0;
}