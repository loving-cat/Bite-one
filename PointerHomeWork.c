#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	// char*
//	//char ch = 'w';
//	//char* pc = &ch;
//
//
//	const char *ps = "abcdef";//ps�зŵ����ַ�������ĸ��ַ
//	printf("%s\n", ps);
//	printf("%c\n", *ps);
//
//	return 0;
//}

//int main()
//{
//	char* arr[4];//���ָ�������
//	int *arr2[6];
//	return 0;
//}

//����ָ��
//����ָ�� - int* -ָ�����͵�ָ��
//�ַ�ָ�� - char*-ָ���ַ���ָ��
//����ָ�� - ָ�������ָ��

//int main()
//{
//	int num = 10;
//	int* p = &num;
//	int arr[10] = { 0 };
//	int (*pa)[10] = &arr;//ȡ����������ĵ�ַ
//	//pa ����һ������ָ�����
//	
//	int* p2 = arr;//��������ʵ��������Ԫ�صĵ�ַ��arr����&arr[0]
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//pf���Ǻ���ָ�����
//	int (*pf)(int,int) = Add;//&Add
//	//int sum = (*pf)(3, 5);
//	int sum = pf(3, 5);
//	printf("%d\n", sum);
//	return 0;
//}


//����ָ������

//int mina()
//{
//	//����ָ������
//	int (*pfArr[5])(int, int);
//	//p3 ��һ��ָ����ָ�������ָ��
//	int (*(*p3)[5])(int, int) = &pfArr;
//
//	return 0;
//}

//ʹ�ú���ָ��ʵ�ֻص�����

//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d\n", sizeof(arr));                 
//	return 0;
//}


//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;//p��һ���ṹ��ָ�����
//
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

int main()
{
	char* a[] = { "ch","at","al" };
	char** pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
}