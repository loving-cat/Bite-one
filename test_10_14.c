#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//#define MAX(x,y) ((x)>(y)?(x):(y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ķ�ʽ
//	int m1 = Max(a, b);
//	printf("m1=%d\n", m1);
//
//	int m2 = MAX(a, b);
//	printf("m2=%d\n", m2);
//	return 0;
//}

//��Ĳ������Գ�������
//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = (int*)malloc(10*sizeof(int));
//	int* p2 = MALLOC(10, int);
//	return 0;
//}

//#define M 100
//int main()
//{
//	printf("%d\n", M);
//#undef M //ɾ����
//	//printf("%d\n", M);
//	return 0;
//}

//#define __DEBUG__
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for ( i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef __DEBUG__
//		printf("%d\n", arr[i]);
//#endif 
//	}
//	return 0;
//}

//��������ָ��

//#include"cod.h"
//int main()
//{
//	return 0;
//}

//#include<limits.h>
//#include<ctype.h>
//enum Status
//{
//	VALID,
//	INVALID
//};
//
//enum Status status = INVALID;
//
//int my_atoi(const char* str)
//{
//	if (str == NULL)
//	{
//		return 0;
//	}
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	//�հ��ַ�
//	while (isspace(*str))
//	{
//		str++;
//	}
//	int flag = 0;
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	//���������ַ�
//	//123
//	long long ret = 0;
//	while (isdigit(*str))
//	{
//		ret = ret * 10 + (*str - '0');
//		//��������СֵС�����������ֵ��Խ��
//		if (ret<INT_MIN || ret>INT_MAX)
//		{
//			return 0;
//		}
//		str++;
//	}
//	if (*str == '\0')
//	{
//		status = VALID;
//		return (int)ret;
//	}
//	else
//	{
//		return ret;
//	}
//}
//int main()
//{
//	int ret = my_atoi("-123");
//	if (status == VALID)
//		printf("�Ϸ���ת��:%d\n", ret);//-123
//	else
//		printf("�Ƿ���ת����%d\n",ret);
//	return 0;
//}
////��ָoffer


#define SWAP_BIT(n) n=(((n&0xaaaaaaaa)>>1) + ((n&0x55555555)<<1))
int main()
{
	int a = 10;
	SWAP_BIT(a);
	printf("%d\n", a);
	SWAP_BIT(a);
	printf("%d\n", a);
	return 0;
}