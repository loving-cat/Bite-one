#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	// char*
//	//char ch = 'w';
//	//char* pc = &ch;
//
//
//	const char *ps = "abcdef";//ps中放的是字符串首字母地址
//	printf("%s\n", ps);
//	printf("%c\n", *ps);
//
//	return 0;
//}

//int main()
//{
//	char* arr[4];//存放指针的数组
//	int *arr2[6];
//	return 0;
//}

//数组指针
//整型指针 - int* -指向整型的指针
//字符指针 - char*-指向字符的指针
//数组指针 - 指向数组的指针

//int main()
//{
//	int num = 10;
//	int* p = &num;
//	int arr[10] = { 0 };
//	int (*pa)[10] = &arr;//取出的是数组的地址
//	//pa 就是一个数组指针变量
//	
//	int* p2 = arr;//数组名其实是数组首元素的地址，arr就是&arr[0]
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//pf就是函数指针变量
//	int (*pf)(int,int) = Add;//&Add
//	//int sum = (*pf)(3, 5);
//	int sum = pf(3, 5);
//	printf("%d\n", sum);
//	return 0;
//}


//函数指针数组

//int mina()
//{
//	//函数指针数组
//	int (*pfArr[5])(int, int);
//	//p3 是一个指向函数指针数组的指针
//	int (*(*p3)[5])(int, int) = &pfArr;
//
//	return 0;
//}

//使用函数指针实现回调函数

int main()
{
	char arr[] = "abcdef";

	printf("%d\n", sizeof(arr));
	return 0;
}