#include<stdio.h>
#define count(x) ((x)*(x))
#define MAX(a,b) ((x)>(y)?(x):(y))
#define PRINTF(a , frmat) printf("the value of " #a " is "frmat"\n "  ,a)
//#define GENERIC_MAX(type)			\
//type type##_MAX(type x,type y)		\
//{									\
//	return (x>y?x:y);		\
//}
#define GENERIC_MAX(type) \
type type##_max(type x, type y)\
{ \
return (x>y?x:y); \
}
GENERIC_MAX(int)
GENERIC_MAX(float)
//使用宏可能会出现优先级的问题，应该多使用括号
int main()
{
	//将a的值放入寄存器中
	int x = 5;
	int y = 10;
	int max = int_max(x,y);
	printf("%d\n",max);
	printf("%d\n", count(y+10));
	PRINTF(x,"%d");
	return 0;
}