#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	//#���԰Ѻ궨�����ת��Ϊ�ַ���
//	return 0;
//}

//##  �����ݵ�����ֵ�����һ��

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