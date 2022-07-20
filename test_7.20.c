#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	/*int age = 0;
//	scanf("%d", &age);
//	if (age<18) 
//	{
//		printf("未成年\n");
//		printf("不能喝酒\n");
//	}
//	else
//	{
//		printf("成年\n");
//		printf("适量饮酒\n");
//	}*/
//	//<18 青少年
//	//18 - 26 青年
//	//31 - 45 中年
//	//46 - 60 壮年
//	//60 - 90 老年
//	//90 -    老寿星
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("少年\n");
//	}
//	else if(age>=18 && age <30)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 30 && age < 45)
//	{
//		printf("中年\n");
//	}
//	else if (age >= 45 && age < 60)
//	{
//		printf("壮年\n");
//	}
//	else if (age >= 60 && age < 90)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老寿星\n");
//	}
//
//	return 0;
//}
//C语言 0表示假，非0表示真。

//int main()
//{
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//
//	}
//	return 0;
//}

//int test()
//{
//	if (0)
//		return 1;
//
//	return 0;
//}
//int main()
//{
//	int a = test();
//
//	return 0;
//}

//int mian()
//{
//	int num = 1;
//	/*if (num == 5)
//	{
//		printf("hehe\n");
//	}*/
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1) //判断是否为奇数
//	{
//		printf("奇数\n");
//	}
//	else
//	{
//		printf("偶数\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	while(num<=100)
//	{
//		if (num % 2 == 1)
//		{
//			printf("奇数:%d\n", num);
//		}
//		num++;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期天");
//		break;
//	default:
//		printf("输入的不是地球时间");
//		break;
//	}
//	return 0;
//}

//1-5 工作日
//6-7 休息日
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("输入的不是地球时间");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	while (1)
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		
//	} 
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	return 0;
//}


//EOF end of file 文件结束标志
//int main()
//{
//	int ch = 0;
//	while ((ch=getchar())!= EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);
//	//清理\n
//	int tmp = 0;
//	while((tmp=getchar())!='\n')//不想存可以去掉tmp
//	{
//		;	
//	}
//	printf("请确认密码(Y/N):");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF )
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <=10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	//for的初始化，判断，调整三个部分可以省略
	//但是省略掉判断部分，就意味着判断恒为真
	//死循环
	/*for (;;)
	{
		printf("hehe\n");
	}*/
	int i = 0;
	int j = 0;
	int count = 0;
	for ( i = 0; i < 10; i++)
	{
		for ( j = 0; j < 10; j++)
		{
			printf("hehe");
			count++;
			printf("%d", count);
		}
	}
	return 0;
}