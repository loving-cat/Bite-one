#define _CRT_SECURE_NO_WARNINGS 1
//�⺯�������� 100-200
#include<math.h>
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 100; i < 200; i++)
//	{
//		int flag = 1;//��ʾ����
//		//�ж�i�Ƿ�Ϊ����
//		//ʹ��2 - i-1֮�������ȥ�Գ�i
//		int j = 0;
//		for ( j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0) 
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//�Գ���
//����������N�־��硷

//int main()
//{
//	int i, j = 0;
//	int n = 0;
//	scanf("%d %d", &i, &j);
//	while (n = i % j)
//	{
//		i = j;
//		j = n;    //��С������ (i % j)/n;
//	}
//	printf("%d\n", j);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = 0;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//
//C���Ա������ṩ��һЩ�⺯��
//printf
//scanf
//strlen
//
// VS - ΢��
// gcc = gcc �ٷ�
// clang - ƻ��
// 
//C���Ծ����﷨
//C���Ա�׼������һЩ����
//#include<string.h>
//int main()
//{
//	char arr[] = "hello bit";
//	memst(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//���������õ�ʱ��
//ʵ�δ����β�ʱ���βν���ʵ�ε�һ����ʱ����
//���Զ��βε��޸�ʱ��Ӱ��ʵ�ε�

//��ȷ
//void Swap(int* px, int* py)
//{
//	int z = 0;
//	z = *px;	//z = a
//	*px = *py;	//a = b		
//	*py = z;	//b = z
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(&a, &b);
// ����ַ����ַ����
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}

//����
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;	//z = a
//	x = y;	//a = b		
//	y = z;	//b = z
//	
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	// ��ֵ����
//	Swap(a, b);
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d", p);
//	return 0;
//}
//void cheng_fa( int x )
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <=x; i++)
//	{
//		for (j = 1; j <=x; j++)
//		{
//			printf("%d*%d=%2d ", j, i, (i * j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int t = 0;
//	scanf("%d",&t);
//	cheng_fa(t);
//	return 0;
//}
//void jiao_huan(int* px , int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a, b = 0;
//	scanf("%d %d", &a, &b);
//	jiao_huan(&a,&b);
//	printf("%d %d", a, b);
//	return 0;
//}

//��1��ʮ��һ����겻�򣺼����year�ܹ���4���������ǲ��ܱ�100��������year�����ꡣ
//��2��ÿ�İ�����һ�����year�ܹ���400��������year�����ꡣ
//void run_run(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//	{
//		printf("%d������", x);
//	}
//	else
//	{
//		printf("%d��������", x);
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	run_run(i);
//	return 0;
//}
//void su_shu(int i, int j)
//{
//	for (i = 100; i < 200; i++)
//	{
//		int su = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				su = 0;
//				break;
//			}
//		}
//		if (su == 1)
//		{
//			printf("������%d\n", i);
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	su_shu(i,j);
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int* p;
//	p = &n;
//	printf("%p\n", &n);
//	printf("%p\n", p);//00000001000FF734
//	printf("%p\b", &p);
//	return 0;
//}
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("**********************************\n");
	printf("*****1.play            0.exit*****\n");
	printf("**********************************\n");
}

void game()
{
	int ret = rand() % 100 + 1;
	int i = 0;
	while (1)
	{
		printf("������²������\n");
		scanf("%d", &i);
		if (i<ret)
		{
			printf("С��\n");
		}
		else if(i>ret)
		{
			printf("����\n");
		}
		else
		{
			printf("�¶��ˣ�\n");
			break;
		}
	}
}

int main()
{
	int n = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (n);
	return 0;
}