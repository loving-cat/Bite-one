#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ʹ�� do while ѭ�� ��ӡ 1-10
//int main()
//{
//	int i = 1;
//	do
//	{
//		
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	} while (i < 10);
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
//		
//	}
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//			sum += ret;
//		}
//	printf("%d", sum);
//	return 0;
//}

//��һ�����������в��Ҿ����ĳ������n.
//1 2 3 4 5 6 7 8 9 10

//����7

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//	int i = 0;
//	scanf("%d", &i);
//	while(left<=right){
//	int mid = (right + left) / 2;
//	if (arr[mid] < i)
//	{
//		left = arr[mid] + 1;
//	}
//	else if (arr[mid] > i)
//	{
//		right = arr[mid] - 1;
//	}
//	else
//	{
//		printf("�ҵ��� �±��ǣ�%d\n", mid);
//		break;
//	}
//}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}
//#include<string.h>
//#include<Windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}
//#include<string.h>
//strcmp�ķ���ֵ
//>0
//<0
//==0
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for ( i = 0; i < 3; i++)
//	{
//		printf("����������");
//		scanf("%s", password);
//		if (strcmp(password, "birbit") == 0)
//		{
//			printf("������ȷ����¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������");
//		}
//	}
//	if (i == 3)
//	{
//		printf("����������󣬳����˳�");
//	}
//	return 0;
//}

//��������Ϸ
//#include<string.h>
//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("*********************\n");
//	printf("**1.play     0.exit**\n");
//	printf("*********************\n");
//
//}
//void game()
//{
//	int n = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("������:>\n");
//		scanf("%d", &n);
//		if (ret > n)
//		{
//			printf("С��\n");
//		}
//		else if(ret < n)
//		{
//			printf("����\n"); 
//		}
//		else
//		{
//			printf("�¶��ˣ�\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	//�����������������
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("��ʼ��Ϸ\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//#include<string.h>
//#include<Windows.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//		printf("�ػ�ȡ��\n");
//		break;
//	}
//	else 
//	{
//		goto again;
//	}
//	return 0;
//}

//debug - ����
//release - ����

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//int main()
//{
//	
//	double num1 = 0.0, num2 = 0.0, num3 = 0.0;
//	for (int i = 1; i < 100; i+=2)
//	{
//		num1 = num1 + (1.0) / i;
//	}
//	for (int i = 2; i < 101; i+=2)
//	{
//		num2 = num2 + (1.0) / i;
//	}
//	num3 = num1 - num2;
//
//	printf("%lf", num3);
//	return 0;
//}

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	for ( i = 1; i <=100; i++ )
//	{
//		
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

////������
//#include<string.h>
//#include<time.h>
//#include<Windows.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("***********************\n");
//	printf("***1.play     0.exit***\n");
//	printf("***********************\n");
//
//}
//
//void game()
//{
//	int n = 0;
//	int ret = rand() % 100 + 1;
//	while(1)
//	{
//		printf("������²������:>\n");
//		scanf("%d", &n);
//		if (ret > n)
//		{
//			printf("��С��\n");
//		}
//		else if (ret < n)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶��ˣ�\n");
//			break;
//		}
//	}
//	
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int i = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>\n");
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 1:
//			printf("��ʼ��Ϸ\n");
//			game();
//			Sleep(3000);
//			system("cls");
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//		Sleep(2000);
//		system("cls");
//	} while (i);
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int n = 0;
	printf("�����룺>");
	scanf("%d", &n);
	while (left <= right)
	{
		//int mid = (left + right) / 2;//��������ʱ������ֲ���λ��ʧ
		int mid = left + (right - left) / 2;
		if (arr[mid] > n)
			{
				right = arr[mid] - 1;
			}
			else if (arr[mid] < n)
			{
				left = arr[mid] + 1;
			}
			else
			{
				printf("�ҵ��ˣ������±��ǣ�%d\n", mid);
				break;
			}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	
	return 0;
}