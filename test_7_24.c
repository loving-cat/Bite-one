#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int get_max(int x,int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = get_max(a,b);
//	printf("%d\n", m);
//	return 0;
//}

//void Swap1(int x,int y)//��ʽ����
//{
//
//	int tmp = 0;
//		tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ�� a=%d b=%d\n", a, b);
//	//Swap1(a, b);//ʵ��,��ֵ����
//	Swap2(&a,&b);//��ַ����
//	printf("������ a=%d b=%d\n", a, b);
//
//	return 0;
//}

//����������1
//������������ 0
//#include<math.h>
//int is_primer(int n)
//{
//	int j = 0;
//	for ( j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	//��ӡ100-200֮�������
//	int i = 0;
//	for ( i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_primer(i) == 1)
//		{
//			printf("������%d\n", i);
//		}
//	}
//	return 0;
//}

//void print(int arr[], int sz)
//{
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	print(arr, 10);
//	return 0;
//}

//�����������д����ֵ,����Ĭ�ϻ᷵��һ��ֵ
//��Щ�������Ϸ��ص��ǣ����һ��ָ������Ľ��
//int test()//������ôд��©������ֵ
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b; 
//}
//int main()
//{
//	printf("%d\n", test());
//	return 0;
//}

//int is_leap_year(int year)
//{
//	if ((year % 4 == 0) && (year % 100 != 0) || ( year % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for ( y = 1000; y <= 2000; y++)
//	{
//		//�ж�y�ǲ�������
//		if (is_leap_year(y) == 1)
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//		   ������ int* arr
//int binary_search(int arr[], int x, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right){
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else 
//		{
//			return mid;//�ҵ�
//		}
//	}
//	return -1;//�Ҳ���
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	//�ҵ��˷����±�
//	//�Ҳ�������-1
//	//���鴫�Σ����ݵ���������Ԫ�ص�ַ
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int ret = binary_search(arr1, k,sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���");
//	}
//	else 
//	{
//		printf("�ҵ���,�±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//int Add(int n)
//{
//	return n + 1;
//}
//int main()
//{
//	int num = 0;
//
//	num = Add(num);
//	printf("%d", num);
//	num = Add(num);
//	printf("%d", num);
//	num = Add(num);
//	printf("%d", num);
//	/*Add(&num);
//	printf("%d", num);
//	Add(&num);
//	printf("%d", num);
//	Add(&num);
//	printf("%d", num);*/
//	return 0;
//}

//������Ƕ�׵��ú���ʽ����

//#include<string.h>
//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n",len);
//	printf("%d\n",strlen("abcdef"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//4321
//	//ע��printf�����ķ���ֵ�Ǵ�ӡ����Ļ���ַ��ĸ�����
//	return 0;
//}

//����
//int Add(int, int);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int s = Add(a, b);
//	printf("%d\n", s);
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//VS 2022 �Ǳ������� ��ʵ�Ǽ��ɿ���������IDE
//�༭��������������������������
//
//#include "Add.h"
//int main()
//{
//	int a, b = 0;
//	scanf("%d %d", &a, &b);
//	int s = Add(a, b);
//	printf("%d\n", s);
//	return 0;
//}

//�ݹ��˼����ʽ�����»�С
//print(1234)
//print(123)4
//print(12) 3 4
//print(1) 2 3 4
//1 2 3 4
//void print(unsigned int n)//1234
//{
//	if (n < 10)
//	{
//		print("%d", n);
//	}
//	else
//	{
//		print(n / 10);//1234 / 10 = 123
//		printf("%d ", n % 10);// 1234 % 10 = 4
//	}
//}

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u ", &num);//1234
//	print(num);//����˳���ӡnum��ÿһλ
//	/*while (num)
//	{
//		printf("%d", num % 10);
//		num = num / 10;
//	}*/
//	return 0;
//}
//int di_gui(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	return (n * di_gui(n - 1));
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int l = di_gui(n);
//	printf("%d", l);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	for (int i = 1; i <=n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;
//}

void c_py(int k)
{
	if (k < 10)
	{
		printf("%d ", k);
	}
	else
	{
		c_py(k / 10);
		printf("%d ", k % 10);
	}
	
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	c_py(n);
	return 0;
}