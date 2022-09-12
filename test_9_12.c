#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr[] = "xiaoli@qq.com";
//	char buf[200] = { 0 };
//	strcpy(buf, arr);
//
//	const char* p = "@.";
//	char* str = strtok(buf, p);
//	printf("%s\n", str);
//
//	str = strtok(NULL, p);
//	printf("%s\n", str);
//
//	str = strtok(NULL, p);
//	printf("%s\n", str);
//
//	return 0;
//}

//int main() 
//{
//	char arr[] = "xiaoli@qq.com";
//	char buf[200] = { 0 };
//	strcpy(buf, arr);
//	const char* p = "@.";
//	char* str = NULL;
//	for ( str=strtok(buf,p);str!=NULL; str=strtok(NULL,p))
//	{
//		printf("%s\n",str);
//	}
//	return 0;
//
//}
#include<errno.h>
//int main()
//{
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//	//printf("%s\n", strerror(5));
//
//	//错误码记录到错误码的变量中
//	//errno
//	//#include<errno.h>
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		//printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

#include<ctype.h>
//int main()
//{
//	char arr[] = "Are you ok?";
//	char* p = arr;
//	while (*p)
//	{
//		if (islower(*p))
//		{
//			*p = toupper(*p);
//		}
//		p++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr, 20);*/
//
//	float arr1[] = { 1.0f,2.0f,3.0f,4.0f };
//	float arr2[5] = { 0.0 };
//	memcpy(arr2, arr1, 8);
//	return 0;
//}
//模拟实现memcpy
#include<assert.h>
//void my_memcpy(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest);
//	assert(src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//模拟memmove
//void my_memmove(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest);
//	assert(src);
//	if (dest < src)//1 前->后
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else//2 3 后->前
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
////memcpy 只需要实现不重叠拷贝就可以了 -60 100
////memmove 是需要实现重叠内存的拷贝的
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr2[10] = { 0 };
//	//my_memcpy(arr1+2, arr1, 20);
//	memmove(arr1 + 2, arr1, 20);
//	/*int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf(" %d", arr2[i]);
//	}
//	float arr3[] = { 1.0f,2.0f,3.0f,4.0f };
//	float arr4[5] = { 0.0 };
//	my_memcpy(arr4, arr3, 8);*/
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,0,0 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	memset(arr, 0, 9);
		int i = 0;
		for ( i = 0; i < 5; i++)
		{
			printf("%d ", arr[i]);
		}
	return 0;
}