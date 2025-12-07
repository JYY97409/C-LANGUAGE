#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
#define offsetof(steam) ftell(steam)
#define M 1
int main()
{
	int n;
	int m;
	scanf_s("%d%d", &n,&m);
	
	int** arr = (int**)malloc(n * sizeof(int*));
	
	if (arr == NULL)
	{
		perror("malloc");
		return 1;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = (int*)malloc(m * sizeof(int));
		if (arr[i] == NULL)
		{
			for (int j = i; j >= 0; j--)
			{
				free(arr[j]);
			}
			free(arr);
			return 1;
		}
	}											
	for (int j = 0; j < n; j++)
	{
		free(arr[j]);
	}
	free(arr);
	return 0;

}

//路径
//相对路径
//. --当前路径
//..上一级路径
//
//绝对路径是从根目录开始写
//int main()
//{
//	int a = 10000;
//	FILE* file = NULL;  
//	errno = fopen_s(&file, "text.txt", "r");
//	if (file == NULL)
//	{
//		perror("file");
//		return 1;
//	}
//	else
//	{
//		printf("文件打开成功\n");
//	}
//	for (char a = 'a'; a < 'z'; a++)
//	{
//		fputc(a, file);
//	}
//	int flag = fclose(file);
//	if (flag == EOF)
//	{
//		perror("fclose");
//	}
//	else
//	{
//		printf("文件关闭成功\n");
//	}
//	file = NULL;
//	return 0;
//}
//功能：关闭参数 stream 关联的⽂件，并取消其关联关系。与该流关联的所有内部缓冲区均会解除关
//联并刷新：任何未写⼊的输出缓冲区内容将被写⼊，任何未读取的输⼊缓冲区内容将被丢弃。
//参数：
//stream ：指向要关闭的流的 FILE 对象的指针
//返回值：成功关闭 stream 指向的流会返回0，否则会返回 EOF 。




//int main()
//{
//	int** arr = (int**)malloc(3 * sizeof(int*));
//	if (arr == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		arr[i] = (int*)malloc(5 * sizeof(int));
//		if (arr[i] == NULL)
//		{
//			perror("malloc--2");
//			return 1;
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			*(*(arr + i) + j) = j + 1;
//		}
//	}
//	//arr在此处是首元素的地址
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		free(arr[i]);
//	}
//	free(arr);
//	arr = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* file = NULL; 
//	fopen_s(&file, "text.txt", "r");
//	if (file == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		int ch = fgetc(file);
//		//fetc可以在错误的时候在FILE中设置一个错误显示器，然后我们可以使用feof来读取错误
//		if (ch == EOF)
//		{
//			if (feof(file))
//			{
//				printf("读到文件末尾了\n");
//				break;
//			}
//			else if(ferror(file))
//			{
//				printf("读取错误了\n");
//				break;
//			}
//		}
//		printf("%c ", ch);
//	}
//	return 0;
//}


//int main()
//{
//	FILE* file = NULL;
//	fopen_s(&file, "text.txt", "w");
//	//
//	if (file == NULL)
//	{
//		perror("fopen_s");
//		return 1;
//	}
//	int flag = 0;
//	flag = fputs("hello world\n", file);
//	flag = fputs("change world\n", file);
//	if (flag != 0)
//	{
//		printf("输入发生错误\n");
//		perror("fputs");
//		return 1;
//	}
//	fclose(file);
//	return 0;
//}


//int main()
//{
//	FILE* file = NULL;
//	fopen_s(&file, "text.txt", "r");
//	if (file == NULL)
//	{
//		perror("fopen_s");
//		return 1;
//	}
//	char arr[20];
//	while (fgets(arr, 20, file) != 0)
//	{
//		printf("%s\n",arr);
//	}
//	fclose(file);
//	file = NULL;
//	return 0;
//}

//fprintf类似于frintf,相当于是将内容打印到输入流中
//

//int main()
//{
//	int a = 1234;
//	char arr[20];
//	sprintf(arr, "%d", a);
//	return 0;
//}

//int main()
//{
//	FILE* file = fopen("text1.txt", "r");
//	if (file == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int c = fgetc(file);
//	printf("%c ", c);
//
//	c = fgetc(file);
//	printf("%c ", c);
//
//	c = fgetc(file);
//	printf("%c ", c); 
//	
//	c = fgetc(file);
//	printf("%c ", c); 
//	
//	c = fgetc(file);
//	printf("%c ", c);
//
//	fseek(file, 2, SEEK_SET);
//	c = fgetc(file);
//	printf("%c ", c);
//	rewind(file);
//	c = fgetc(file);
//	printf("%c ", c);
//	return 0;
//}

//#include <stdio.h>
//#include <windows.h>
////VS2022 WIN11环境测试
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt⽂件，发现⽂件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到⽂件（磁盘）
//	//注：fflush 在⾼版本的VS上不能使⽤了
//	printf("再睡眠10秒-此时，再次打开test.txt⽂件，⽂件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭⽂件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* file = fopen("text.txt", "w");
//
//	fputs("abcdefg", file);
//	fflush(file);
//	fseek(file,4,DATA  )
//	return 0;
//}