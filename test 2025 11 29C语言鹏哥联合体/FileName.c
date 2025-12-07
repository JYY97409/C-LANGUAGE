#include<stdio.h>
#include<stdlib.h>
//union un 
//{
//	int a;
//	char b;
//}p;
//void check()
//{
//	p.a = 1;
//	char* p1 = &p.b;
//	if (*p1 == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//}
//int main()
//{
//	check();
//	return 0;
//}

int main()
{
	int* p = (int*)malloc(20);
	if (p == NULL)
	{
		perror("malloc");
		return 0;
	}
	for (int i = 0; i < 5; i++)
	{
		*(p + i) = i + 1;
	}
	int* pstr = realloc(p, 40);
	if (pstr == NULL)
	{
		perror("realloc");
	}
	else
	{
		p = pstr;
	}
	return 0;
}