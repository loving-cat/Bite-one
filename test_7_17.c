#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	printf("%d\n", 7 / 2);//7 / 2 = 3.。。。1
//	printf("%.2lf\n", 7 / 2.0);
//	return 0;
//}
 

//C语言是如何表示真假的?
//0表示假
//非0表示真
//1 5 - 1
//0

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);//5
//	printf("%d\n", !a);//0
//	return 0;
//}

//int main()
//{
//	int flag = 0;
//	if (flag)//flag 为真，打印hehe
//	{
//		printf("hehe\n");
//	}
//	if (!flag)//flag 为假，打印haha
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = -10;
//	int b = -a;
//	printf("%d\n", b);
//	int c = +a;
//	printf("%d\n", c);
//	return 0;
//
//}

//sizeof 操作符
// sizeof 计算的结果单位是字节
// 
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof a);//4
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof int);//err
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40,	计算的是数组的总大小，单位是字节。
//	printf("%d\n", sizeof(arr[0]));//4
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//40 /4 = 10;
//	//数组的元素个数 如何计算
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = ++a;//前置++，先++,后使用
//	////a=a+1,b=a
//	//printf("a=%d b=%d\n", a, b);
//	//int b = a++;
//	//int b = --a;
//	//a = a-1,b=a
//	int b = a--;
//	//b=a,a=a-1;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}

//是一个错误的代码，在不同的编译器上有不同的结果
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("b=%d\n", b);
//	return 0;
//}
//int main()
//{
//	//int double
//	int a =(int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	/*int a = 0;
//	int b = 5;
//	if (a && b)
//	{
//		printf("hehe\n");
//	}
//	if (a || b)
//	{
//		printf("hehe\n");
//	}*/
//	//int age = 10;
//	////if(18<=age<=35)//err
//	//if (age >= 18 && age <= 35) {
//	//	printf("青年\n");
//	//}
//	int age 10;
//	//<10 >70
//	if (age<10 || age >70)
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d %d", &a, &b);
//	m =(a > b ? a : b);
//	/*if (a>b)
//	{
//		m = a;
//
//	}
//	else {
//		m = b;
//	}*/
//	printf("%d\n", m);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = 4;
//	int d = (a = b - 3, b = a + c, c = a - b, a = c + 3);
//			//a = -3	b= 1		c=-4		a=-1
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[7]);//[]就是下标引用操作符
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);//()函数调用操作符
//	return 0;
//}

//int main()
//{
//	//register 起一个建议的作用
//	register int num = 10;
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}