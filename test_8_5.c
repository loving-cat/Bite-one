#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//模拟实现strcpy库函数
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest= *src;//*dest++= *src++;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//#include<assert.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	
//	char arr2[] = "hello";
//	
//	printf("%s\n", my_strcpy(arr1,arr2));
//	return 0;
//
//}

//const 修饰指针，放在*的左边，表示的是指针指向的内容，不能通过指针来修改
//*p = 20; //err 
//p = &ret; //ok

//const 修饰指针，放在*的右边，表示的是指针变量本身不能修改，但是指针指向内容
//int main()
//{
//	const int num = 10;//const 常变量可以通过指针变量更改
//	//num = 20; //err
//	const int* p = &num;
//	//*p = 20;
//	//*p =20; 解引用的值
//	printf("%d\n", num);
//
//	return 0;
//}


// 
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//   /* for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello\n");
//    }*/
//    printf("%p\n", &i);
//    printf("%p\n", &arr[0]);
//    printf("%p\n", &arr[12]);
//
//
//    return 0;
//}

//void my_yep(int* arr,int sz)
//{
//	int* left = arr;
//	int* right = arr + sz - 1;
//	while (left < right)
//	{
//		while (((left < right) && (*left) % 2 != 0))
//		{
//			left++;
//		}
//		while (((left < right) && (*right) % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//	
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	my_yep(arr,sz);
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//void my_strlen(char* arr1, char* arr2)
//{
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//}
//int main()
//{
//	char arr1[] = "xxxxxxxxxxxxxxx";
//	char arr2[] = "hello bit";
//	my_strlen(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr!='\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}

