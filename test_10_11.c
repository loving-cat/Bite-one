#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	//#可以把宏定义的数转化为字符串
//	return 0;
//}

//##  将传递的左右值组合在一起

//#define CAT(A,B) A##B
//
//int main()
//{
//	int Class107 = 100;
//	printf("%d\n", CAT(Class, 107));
//	return 0;
//}
#include<stdio.h>
#define MAX(x,y) ((x)>(y)?(x):(y))

int main()
{
	int a = 3;
	int b = 4;
	int m = MAX(++a, ++b);
	printf("m=%d a=%d b=%d\n", m, a, b);
	return 0;
}