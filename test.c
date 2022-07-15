#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	printf("hello bit\n");
//	return 0;
//}

//main 是主函数的意思
//main 是程序的入口,有且仅有一个
//F10
//
//stdio std input output
//.h header
//标准输入输出
//#include<stdio.h>
//// int 整型
////printf是库函数，库函数的使用是需要包含头文件的
//int main()
//{
//	//printf("hehe\n");//被""括起来的叫字符串
//	printf("hello zhangsan\n");
//	return 0;
//}
//下面代码是可以的
//int main(void)//void表示main函数不需要参数
//{
//	return 0;
//}
//不建议这样写
//void main()
//{
	//这种写法是非常古老
//}

//不标准的写法
//main()
//{
//}

//int main()
//{//单位是字节
//	printf("%d\n", sizeof(char));	//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//}

//int main()
//{
//	//int a$b;//err
//	//int _2b;
//	//int _2B;
//	//int float;err
//	return 0;
//}

//int b = 20;//全局变量
//
//void test()
//{
//	int c;//局部变量 
//}
//int a = 20;
//int main()
//{//局部变量和全局变量的名字可以相同，当我们既可以使用局部，又可以使用全局变量的时候，局部变量优先
//	int a = 10;//局部变量
//	printf("%d\n", a);
//	return 0;
//}

//写一个程序计算2个整数的和
//printf - 输出/打印
//scanf - 输入
//& 取地址
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//1.输入2个整数
//	scanf("%d %d", &num1, &num2);
//	//2.求和
//	sum = num1 + num2;
//	//3.输出
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int b = 20;
//	{
//		int a = 10;
//		printf("1:%d\n", a);
//	}
//	printf("2:%d\n", b);
//	return 0;
//}

//int a = 10;
//
//void test()
//{
//	printf("test --> %d\n", a);
//}
//int main()
//{
//	printf("%d\n", a);
//	test();
//	return 0;
//}

//声明来自外部的符号
//extern 是用来声明外部符号的
//extern  int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

int main()
{
	{
		int a = 0;
		printf("%d\n", a);
	}
	return 0;
}