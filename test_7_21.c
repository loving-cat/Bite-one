#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//使用 do while 循环 打印 1-10
//int main()
//{
//	int i = 1;
//	do
//	{
//		
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	} while (i < 10);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	for (int i = 1; i <=n; i++)
//	{
//		ret = ret * i;
//		
//	}
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//			sum += ret;
//		}
//	printf("%d", sum);
//	return 0;
//}

//在一个有序数组中查找具体的某个数字n.
//1 2 3 4 5 6 7 8 9 10

//查找7

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//	int i = 0;
//	scanf("%d", &i);
//	while(left<=right){
//	int mid = (right + left) / 2;
//	if (arr[mid] < i)
//	{
//		left = arr[mid] + 1;
//	}
//	else if (arr[mid] > i)
//	{
//		right = arr[mid] - 1;
//	}
//	else
//	{
//		printf("找到了 下标是：%d\n", mid);
//		break;
//	}
//}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}
//#include<string.h>
//#include<Windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}
//#include<string.h>
//strcmp的返回值
//>0
//<0
//==0
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for ( i = 0; i < 3; i++)
//	{
//		printf("请输入密码");
//		scanf("%s", password);
//		if (strcmp(password, "birbit") == 0)
//		{
//			printf("密码正确，登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，程序退出");
//	}
//	return 0;
//}

//猜数字游戏
//#include<string.h>
//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("*********************\n");
//	printf("**1.play     0.exit**\n");
//	printf("*********************\n");
//
//}
//void game()
//{
//	int n = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("猜数字:>\n");
//		scanf("%d", &n);
//		if (ret > n)
//		{
//			printf("小了\n");
//		}
//		else if(ret < n)
//		{
//			printf("大了\n"); 
//		}
//		else
//		{
//			printf("猜对了！\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	//设置随机数的生成器
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("开始游戏\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#include<string.h>
//#include<Windows.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("关机取消\n");
//		break;
//	}
//	else 
//	{
//		goto again;
//	}
//	return 0;
//}

//debug - 调试
//release - 发布

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
//	
//	double num1 = 0.0, num2 = 0.0, num3 = 0.0;
//	for (int i = 1; i < 100; i+=2)
//	{
//		num1 = num1 + (1.0) / i;
//	}
//	for (int i = 2; i < 101; i+=2)
//	{
//		num2 = num2 + (1.0) / i;
//	}
//	num3 = num1 - num2;
//
//	printf("%lf", num3);
//	return 0;
//}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	for ( i = 1; i <=100; i++ )
//	{
//		
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

////猜数字
//#include<string.h>
//#include<time.h>
//#include<Windows.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("***********************\n");
//	printf("***1.play     0.exit***\n");
//	printf("***********************\n");
//
//}
//
//void game()
//{
//	int n = 0;
//	int ret = rand() % 100 + 1;
//	while(1)
//	{
//		printf("请输入猜测的数字:>\n");
//		scanf("%d", &n);
//		if (ret > n)
//		{
//			printf("猜小了\n");
//		}
//		else if (ret < n)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了！\n");
//			break;
//		}
//	}
//	
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int i = 0;
//	do
//	{
//		menu();
//		printf("请选择：>\n");
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 1:
//			printf("开始游戏\n");
//			game();
//			Sleep(3000);
//			system("cls");
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//		Sleep(2000);
//		system("cls");
//	} while (i);
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int n = 0;
	printf("请输入：>");
	scanf("%d", &n);
	while (left <= right)
	{
		//int mid = (left + right) / 2;//在数过大时，会出现部分位丢失
		int mid = left + (right - left) / 2;
		if (arr[mid] > n)
			{
				right = arr[mid] - 1;
			}
			else if (arr[mid] < n)
			{
				left = arr[mid] + 1;
			}
			else
			{
				printf("找到了，它的下标是：%d\n", mid);
				break;
			}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	
	return 0;
}