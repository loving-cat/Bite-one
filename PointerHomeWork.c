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

//int main()
//{
//	char* a[] = { "ch","at","al" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//�⺯��
//#include<assert.h>
//����ָ��������õ�����ָ���ڵ�Ԫ�ظ���
//size_t my_strlen(const char* str)
//{
//	assert(str);
//	const char* start = str;
//	const char* end = str;
//	while (*end!='\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//#include<stdlib.h>
//int main()
//{
//	char arr[10] = "xxxxxxxxx";
//	//const char* p = "abcdef";
//	char arr2[] = { 'b','i','t','\0'};
//	strcpy(arr,arr2);
//	printf("%s\n", arr);
//	return 0;
//}

//#include<assert.h>
//char* my_strcpy(char* dest,char* src)
//{
//	assert(dest);
//	assert(src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return dest;
//}
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "hello bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
//#include<stdlib.h>
//int main()
//{
//	char arr1[20] = "hello \0xxxxxxx";
//	char arr2[] = "world";
//	strcat(arr1, arr2);//�ַ�׷�Ӻ���
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<stdlib.h>
//char* my_strcat(char* dest, const char* src)
//{
//	//1,��Ŀ��ռ��е�\0
//	char* cur = dest;
//	while (*cur!='\0')//�ɼ�Ϊ*cur
//	{
//		cur++;
//	}
//	while (*cur++ = *src++)
//	{
//		;
//	}
//	return dest;
//	//2������Դͷ���ݵ�\0֮��Ŀռ�
//}
//int main()
//{
//	char arr1[20] = "hello \0xxxxxxx";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);//�ַ�׷�Ӻ���
//	printf("%s\n", arr1);
//	return 0;
//}

//strcmp �Ƚϵ��Ƕ�Ӧλ�����ַ��Ĵ�С�����ǳ���
#include<string.h>
//int main()
//{
//	/*char arr1[] = "abcdef";
//	char arr2[] = "abq";*/
//
//	/*char arr1[] = "abcdef";
//	char arr2[] = "abc";*/
//
//	char arr1[] = "abc";
//	char arr2[] = "abc";
//
//	/*char arr1[] = { 'a','b','c' };
//	char arr2[] = { 'a','b','c' };*/ //err
//
//	int ret = strcmp(arr1, arr2);
//	if (ret < 0)
//		printf("arr1<arr2\n");
//	else if (ret > 0)
//		printf("arr1>arr2\n");
//	else
//		printf("arr1==arr2\n");
//	printf("%d\n", ret);
//	return 0;
//}
//ģ��ʵ�� strcmp
//int my_strcmp(const char* s1,const char* s2)
//{
//	assert(s1 && s2);
//		while (*s1 == *s2)
//		{
//			if (*s1 == '\0')
//			{
//				return 0;
//			}
//			s1++;
//			s2++;
//		}
//		if (*s1 > *s2)
//			return 1;
//		else
//			return -1;
//}
//��
//#include<assert.h>
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//int main()
//{
//	/*char arr1[] = "abcdef";
//	char arr2[] = "abq";*/
//
//	/*char arr1[] = "abcdef";
//	char arr2[] = "abc";*/
//
//	char arr1[] = "abc";
//	char arr2[] = "abc";
//
//	/*char arr1[] = { 'a','b','c' };
//	char arr2[] = { 'a','b','c' };*/ //err
//
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//		printf("arr1<arr2\n");
//	else if (ret > 0)
//		printf("arr1>arr2\n");
//	else
//		printf("arr1==arr2\n");
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "xxxx";
//	strncpy(arr1, arr2, 2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "abc";
//	//char arr2[] = "xyz";
//	strncat(arr1, arr1, 3);//�ʺ��Լ����Լ�׷��
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	int ret = strncmp("abcdef", "abc", 3);
//	printf("%d\n", ret);
//	return 0;
//}

//strstr ��һ���ַ����У�������һ���ַ����Ƿ����
//������ڣ����ص��ִ���һ�γ��ֵ�λ��/��ַ
//��������ڣ�����NULL

//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "cde";
//	char* p = strstr(arr1, arr2);
//	if (p == NULL)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("%s\n", p);
//	}
//	return 0;
//}

//ģ��strstr
//�������
char* my_strstr(const char* str1, const char* str2)
{
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	if (*str2 == '\0')
	{
		return str1;
	}
	while (*p)
	{
		s1 = p;
		s2 = str2;
		while (*s1 != '\0' && *s2 != '\0' && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return p;//�ҵ���
		}
		p++;
	}
	return NULL;//�Ҳ����Ӵ�
}
//
//KMP �㷨 - Bվ���������ش󲩸�
//�Ѷ�Ҳ�Ƚϴ�һЩ
//
int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "cde";
	char* p = my_strstr(arr1, arr2);
	if (p == NULL)
	{
		printf("������\n");
	}
	else
	{
		printf("%s\n", p);
	}
	return 0;
}