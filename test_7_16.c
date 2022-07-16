#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//#define MAX 100
//int main()
//{
//	//1.字面常量
//	//100;
//	//3.14;
//	//'a';
//	//"abcdef"
//
//	//2. const修饰的常变量
//	//const int num = 10;
//	/*num = 20;
//	printf("%d\n", num);
//	return 0; */
//
//	//int arr[10] = { 0 };//数组
//	//int n = 10;
//	//int arr[n] = { 0 };
//
//	//3. #define 定义的标识符常量
//	//printf("%d\n", MAX);
//	//MAX = 200;//err 不可以改
//
//}

//4.枚举常量

// 枚举 -> 一一列举
//例如 性别；男，女，保密
//	   血型
//	   三原色：R,G,B
//枚举关键字
//enum Sex
//{
//	//下面是enum Sex 类型变量的可能取值，这三个可能取值就是枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	//enum Sex s = MALE;//性别
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}

//int main()
//{
//	//printf("hello bit.\n");
//	char arr1[] =  "abcdef";
//	char arr2[] = { 'a','b','c' };
//	//string length
//	//strlen 是库函数 是专门求字符长度的
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	/*printf("%s\n", arr1);
//	printf("%s\n", arr2);*/
//
//	return 0;
//}

//int main()
//{
//	printf("abc\\0def");
//	return 0;
//}


//转义字符
//int main()
//{
//	//printf("c:\test\test.c");
//	printf("abcdef");
//	printf("abc\nef");
//	return 0;
//}

//单引号引起来的是字符
//双引号是字符串
//int main()
//{
//	/*printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");*/
//	//printf("c:\\test\\test.c");
//	// \ 转义 \
//
//	//printf("\a\a\a\a"); 触发电脑系统音
//	return 0;
//}

//特殊转义字符
//int main()
//{
//	//printf("%c\n", '\130'); 
//	//printf("%c\n", '\x40');
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	
//
//	return 0;
//}

//实现加法操作
//int Add(int x, int y)
//{
//
//}
//int main()
//{
//	int i, n;
//	Add(i,n);
//	return 0;
//}
//
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("要好好学习吗？(1/0)\n");
//	scanf("%d\n", &input);
//	if (input == 1)
//	{
//		printf("好好学习\n");
//	}
//	else {
//		printf("卖红薯\n");
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("join bit\n");
//	while (line<20000)
//	{
//		//
//		printf("写代码:%d\n",line);
//		line++;
//	}
//	if (line == 20000)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	//求和
//	//sum = a + b;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
