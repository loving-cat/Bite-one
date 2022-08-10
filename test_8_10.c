#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

//int main()
//{
//	unsigned int i;
//	for ( i = 9; i >= 0; i++)
//	{
//		printf("%d", i);
//		sleep(1000);
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//这个数组里的才能修改
//	char* p = arr;
//	//const char* ps = "abcdef";//无法修改
//	//printf("%s\n", ps);
//	//*ps = 'W';		//常量字符串不可以修改
//	//printf("%c\n", *ps);
//	return 0;
//}

//int main()
//{
//	/*char* arr[5] = { "abcdef","zhangsan","zhe","rter","RNG" };
//	int i = 0;
//	for ( i = 0; i < 5; i++)
//	{
//		printf("%s\n", arr[i]);
//	}*/
//
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//	int* arr[3] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{	
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	
//	char ch = 'w';
//	char* p2 = &ch;
//
//	int arr[10] = { 1,2,3,4,5 };
//	int(*pa)[10] = &arr;//
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}

//数组名是数组首元素的地址
//有2个例外：
//1.sizeof(数组名)，计算整个数组的字节
//2.&数组名，取出的是整个数组的地址
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//数组首元素地址，类型int*  +1跳过4个字节
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//数组首元素地址 类型int*
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//数组的地址 类型 int (*)[10]  +1 一次跳过一个数组
//	printf("%p\n", &arr+1);
//
//	return 0;
//}

//int main()
//{
//	int arr[20][20] = { 0 };
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for ( i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int k = 0;
//	printf("请输入你要查找的数字");
//	scanf("%d", k);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n ");
//	}
//	
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr[] = "ABCD";
//	int len = strlen(arr);
//	int k = 0;
//	scanf("%d", &k);
//	int i = 0;
//	k = k % len;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = arr[0];
//		int j = 0;
//		for ( j = 0; j < len-1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[j] = tmp;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//#define row 3
//#define col 3
//int find_num(int arr[row][col], int n, int* px, int* py)
//{
//	//从右上角开始找
//	int x = *px - 1;
//	int y = 0;
//	//与右上角数组进行比较
//	while (x >= 0 && y < *py)
//	{
//		if (n > arr[x][y])
//		{
//			y++;//num比右上角的数字大，往下走一行
//		}
//		else if (n < arr[x][y])
//		{
//			x--;//num比右上角的数字小，往做走一列
//		}
//		else
//		{
//			*px = x;//num的横坐标
//			*py = y;//num的纵坐标
//			return 1;//相等函数值返回1说明已经找到了
//		}
//	}
//	//函数值返回0说明找不到
//	return 0;
//}
//int main()
//{
//	//创建一个二维数组将上图数据存储起来
//	int arr[row][col] = { 0 };
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int x = row;//x坐标
//	int y = col;//y坐标
//	int n = 0;
//	scanf("%d", &n);
//	//用ret接受函数返回值
//	int ret = find_num(arr, n, &x, &y);
//	if (ret == 1)
//	{
//		printf("找得到\n");
//		printf("下标是：%d %d\n", x + 1, y + 1);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}



int my_check(char* n,char* m,int len)
{
	for (int i = 1; i <= len; ++i)
	{	//i为1时第一次旋转
		char tem = *n;
		int j = 0;
		for (j = 0; j < len; ++j)
		{
			*(n + j) = *(n + j + 1);
		}
		*(n + j) = tem;//将刚才取出的值放到最后一个元素
		if (strcmp(n, m) == 0)
		{
			return 1;
		}
	}
	
}

int main()
{
	char n[] = "AABCD";
	char m[] = "BCDAA";
	int len = strlen(n);
	if (my_check(n, m, len))

		printf("相同");
	else
		printf("不同");

	return 0;
}
