#define _CRT_SECURE_NO_WARNINGS 1
//库函数求素数 100-200
#include<math.h>
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 100; i < 200; i++)
//	{
//		int flag = 1;//表示素数
//		//判断i是否为素数
//		//使用2 - i-1之间的数字去试除i
//		int j = 0;
//		for ( j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0) 
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//试除法
//《素数求解的N种境界》

//int main()
//{
//	int i, j = 0;
//	int n = 0;
//	scanf("%d %d", &i, &j);
//	while (n = i % j)
//	{
//		i = j;
//		j = n;    //最小公倍数 (i % j)/n;
//	}
//	printf("%d\n", j);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = 0;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//
//C语言编译器提供了一些库函数
//printf
//scanf
//strlen
//
// VS - 微软
// gcc = gcc 官方
// clang - 苹果
// 
//C语言就是语法
//C语言标准就做了一些工作
//#include<string.h>
//int main()
//{
//	char arr[] = "hello bit";
//	memst(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//当函数调用的时候
//实参传给形参时，形参将是实参的一份临时拷贝
//所以对形参的修改时不影响实参的

//正确
//void Swap(int* px, int* py)
//{
//	int z = 0;
//	z = *px;	//z = a
//	*px = *py;	//a = b		
//	*py = z;	//b = z
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(&a, &b);
// 传地址，传址调用
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//错误
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;	//z = a
//	x = y;	//a = b		
//	y = z;	//b = z
//	
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前：a=%d b=%d\n", a, b);
//	// 传值调用
//	Swap(a, b);
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d", p);
//	return 0;
//}
//void cheng_fa( int x )
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <=x; i++)
//	{
//		for (j = 1; j <=x; j++)
//		{
//			printf("%d*%d=%2d ", j, i, (i * j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int t = 0;
//	scanf("%d",&t);
//	cheng_fa(t);
//	return 0;
//}
//void jiao_huan(int* px , int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a, b = 0;
//	scanf("%d %d", &a, &b);
//	jiao_huan(&a,&b);
//	printf("%d %d", a, b);
//	return 0;
//}

//（1）十年一闰百年不闰：即如果year能够被4整除，但是不能被100整除，则year是闰年。
//（2）每四百年再一闰：如果year能够被400整除，则year是闰年。
//void run_run(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//	{
//		printf("%d是闰年", x);
//	}
//	else
//	{
//		printf("%d不是闰年", x);
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	run_run(i);
//	return 0;
//}
//void su_shu(int i, int j)
//{
//	for (i = 100; i < 200; i++)
//	{
//		int su = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				su = 0;
//				break;
//			}
//		}
//		if (su == 1)
//		{
//			printf("素数：%d\n", i);
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	su_shu(i,j);
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int* p;
//	p = &n;
//	printf("%p\n", &n);
//	printf("%p\n", p);//00000001000FF734
//	printf("%p\b", &p);
//	return 0;
//}
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("**********************************\n");
	printf("*****1.play            0.exit*****\n");
	printf("**********************************\n");
}

void game()
{
	int ret = rand() % 100 + 1;
	int i = 0;
	while (1)
	{
		printf("请输入猜测的数字\n");
		scanf("%d", &i);
		if (i<ret)
		{
			printf("小了\n");
		}
		else if(i>ret)
		{
			printf("大了\n");
		}
		else
		{
			printf("猜对了！\n");
			break;
		}
	}
}

int main()
{
	int n = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (n);
	return 0;
}