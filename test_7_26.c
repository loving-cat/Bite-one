#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", n);
//	int arr[n];//����C99֧�ֱ䳤����
//	return 0;
//}

//int main()
//{
//	int n = 0;//��ʼ��
//	int m;
//	m = 20;
	//
	//int arr[10] = { 1 };//����ȫ��ʼ������һ��Ԫ�س�ʼ��Ϊ1������Ϊ0
	//int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//char ch1[10] = { 'a','b','c' };//a b c 0 0 0 0 0 0 0
	//char ch2[10] = "abc";			// a b c 0 0 0 0 0 0 0 
	//printf("%s", ch1);
	//printf("%s", ch2);

	/*int arr1[] = { 1,2,3,4 };
	int arr2[10] = { 1,2,3,4 };
	char ch3[] = "abc";
	char ch4[] = { 'a','b','c'};
	printf("%s", ch4);
	char ch5[10] = "abc";*/

	/*char arr[] = ""; //err
	scanf("%s", arr);
	printf("%s\n", arr);*/
	/*int arr[] = { 0 };
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	return 0;*/
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n ",i, &arr[i]);//arr[i]��ʾ�����һ��Ԫ�أ������Ǵ�������
//	}
//}

//int main()
//{
//	/*int arr[3][4] = { 1,2,3,4,5 };
//	int arr[3][4] = { {1,2},{3,4},{5} };
//	double arr1[5][6];*/
//	//���ڶ�ά���飬��ʼ��ʱ������ʡ�Ե��У����ǲ���ʡ�Ե���
//	//int arr[][4] = { 1,2,3,4 };
//
//	/*int arr[3][4] = { {1,2},{3,4},{5} };
//	int j = 0;
//	for ( j = 0; j < 4; j++)
//	{
//		int i = 0;
//		for ( i = 0; i < 3; i++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n");
//	}*/
//	//int arr[3][4] = { {1,2},{3,4},{5} };
//	//int i = 0;
//	//for ( i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	for ( j = 0; j < 4; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2},{3,4},{5} };
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n ",i,j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0 - 9
//	int i = 0;
//	for (i = 0; i <=10; i++)//Խ�����
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < 5; j++)//��ά����Խ��
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//ð������
//ѡ������
//��������
//��������
//������
//					ָ��
//void bubble_sort(int arr[], int sz)
//{
//
//	//ð�����������
//	int i = 0;
//	for ( i = 0; i < sz-1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j] - 1)
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	//0 1 2 3 4 5 6 7 8 9
//	//Ҫ��������������
//	//ð������
//	//���鴫�ε�ʱ��
//	//д����������
//	//������������������Ԫ�صĵ�ַ
//	//���ε�ʱ�򣬴��ݵľ���������Ԫ�صĵ�ַ
//	//��ô������βξ�Ӧ����ָ�����������
//	//�������Ľ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	//��ӡ
//	int i = 0;
//	for ( i = 0; i <sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,10 };
//	//int* p = &arr[0];
//	int* p = arr;//arr������������������������Ԫ�صĵ�ַ
//	//arr <==> p
//	//
//	int i = 0;
//	/*for ( i = 0; i < 10; i++)
//	{
//		printf("%p = %p\n", p + i, &arr[i]);
//	}*/
//	//arr[i] = *(arr+i)
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr[i]);
//		//printf("%d ", *(p + i));
//		//printf("%d ", *(arr + i));
//		printf("%d ", p[i]);
//
//
//	}
//	return 0;
//	
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d", *(arr + i));
//		//printf("%d ",arr[i])
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//[]�±����ò�����
//	//a+b -> b+a
//	for ( i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr[i]);//arr[i] --> *(arr+i) --> *(i+arr)
//		printf("%d", i[arr]);
//
//	}
//	return 0;
//}

//����������Ԫ�صĵ�ַ�������������⣩
//��������
//1��sizeof(������)����������ʾ�������飬����������������С����λ���ֽ�
//2��&����������������ʾ�������飬ȡ������������ĵ�ַ
//����֮�⣬����������������������Ԫ�صĵ�ַ
//
//int main()
//{
//	int arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));
//	printf("%p\n", arr);//��Ԫ�صĵ�ַ
//	printf("%p\n", arr+1);//��Ԫ�صĵ�ַ
//
//	printf("%p\n", &arr[0]);//��Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]+1);//��Ԫ�صĵ�ַ
//
//	printf("%p\n", &arr);//����ĵ�ַ
//	printf("%p\n", &arr+1);//����ĵ�ַ
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	return 0;
//}

//void Swap(char* a, char* b)
//{
//	char tmp =  *a;
//	*a = *b;
//	*b = tmp;
//	
//}
//int main()
//{
//	char a[] = "abcdef";
//	char b[] = "zxcvbn";
//	Swap(&a, &b);
//	printf("%s %s", a, b);
//	return 0;
//
//}
//int init(int arr[])
//{
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//int main()
//{
//	int arr[10];
//	init(&arr);
//	printf("%s", arr);
//	return 0;
//}
//void mao_pao(int arr[],int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	mao_pao(arr,sz);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int init(int arr[])
//{
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//}
//print()
//int main()
//{
//	int arr[10];
//	init(arr);
//	print();
//	reverse();
//	return 0;
//}