#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//err �ϼ�
//��NULLָ��Ľ����ò���
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

//�Զ�̬���ٿռ��Խ�����

//int main()
//{
//	int* p = (int*)malloc(20); //������20���ֽ�  ==  int i = 4
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
//		p++;		//λ�ñ��ˣ��ͷŲ���
//		//��ʼ��ַ���£�������һ����������
//	}
//	//���ͷŵ�ʱ��pָ��Ĳ����Ƕ�̬�ռ����ʼλ��
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//���ܶ�ͬһ�ռ����ͷ�
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
//��̬

//void get_memory()
//{
//	int* p = malloc(40);
//	//...
//	free(p);
//	p = NULL;
//}

//�����᷵�ض�̬���ٿռ䣬�ǵ���ʹ�ú󷵻�
//�ڴ�й¶
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
//��һ�ָķ�
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//����ָ��
//	//GetMemory(str);
//	strcpy(str, "hello world");//strΪ��ָ��
//	printf(str);
//	//�ͷ�
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
//	//�ͷ�
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


