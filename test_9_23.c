#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//err 合集
//对NULL指针的解引用操作
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	else
//	{
//		*p = 5;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//对动态开辟空间的越界访问

//int main()
//{
//	int* p = (int*)malloc(20); //申请了20个字节  ==  int i = 4
//	if (p == NULL)
//		return 1;
//	int i = 0;
//	for ( i = 0; i < 20; i++)
//	{
//		//*(p + i) = i;
//		p[i] = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int* p = &num;
//	//...
//	free(p);
//	p = NULL; 
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//		return 1;
//	int i = 0;
//	for ( i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;		//位置变了，释放不了
//		//起始地址记下，用另外一个变量遍历
//	}
//	//在释放的时候，p指向的不再是动态空间的起始位置
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//不能对同一空间多次释放
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//		return 1;
//	int i = 0;
//	for ( i = 0; i < 5; i++)
//	{
//		*(p+i) = i;
//			
//	}
//	free(p);
//
//	free(p);
//	p = NULL;
//
//
//	return 0;
//}
//动态

//void get_memory()
//{
//	int* p = malloc(40);
//	//...
//	free(p);
//	p = NULL;
//}

//函数会返回动态开辟空间，记得在使用后返回
//内存泄露
//int* get_memory()
//{
//	int* p = (int*)malloc(40);
//	//...
//	return p;
//}
//
//int main()
//{
//	int* ptr = get_memory();
//
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}
#include<string.h>
//第一种改法
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//二级指针
//	//GetMemory(str);
//	strcpy(str, "hello world");//str为空指针
//	printf(str);
//	//释放
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

//char* GetMemory(char** p)
//{
//	 p = (char*)malloc(100);
//	return p;
//}
//void test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	//释放
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

int main()
{
	
	return 0;
}


