#include<stdio.h>
int main()
{
	int* p1[10];
	int arr[10] = { 0 };   
	int (*p2)[10]=&arr;  
	
	//p2是一个指针变量，指向的是的数组，数组的类型是int
	return 0;
}
//int main()
//{
//	const char* p = "ghfgvgfvya";//常量字符串，可以被理解为一个不能被修改的数组
//	//p中存的是首字符a的地址
//	printf("%s", p);
//	//%s在使用的时候应该输入一个地址，如果接应用返回的是首个字符，就会报错。
//	printf("%c", *p);
//	return 0;
//}