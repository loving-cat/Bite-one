#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

//int main()
//{
//	unsigned int i;
//	for ( i = 9; i >= 0; i++)
//	{
//		printf("%d", i);
//		sleep(1000);
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//���������Ĳ����޸�
//	char* p = arr;
//	//const char* ps = "abcdef";//�޷��޸�
//	//printf("%s\n", ps);
//	//*ps = 'W';		//�����ַ����������޸�
//	//printf("%c\n", *ps);
//	return 0;
//}

//int main()
//{
//	/*char* arr[5] = { "abcdef","zhangsan","zhe","rter","RNG" };
//	int i = 0;
//	for ( i = 0; i < 5; i++)
//	{
//		printf("%s\n", arr[i]);
//	}*/
//
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//	int* arr[3] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{	
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	
//	char ch = 'w';
//	char* p2 = &ch;
//
//	int arr[10] = { 1,2,3,4,5 };
//	int(*pa)[10] = &arr;//
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}

//��������������Ԫ�صĵ�ַ
//��2�����⣺
//1.sizeof(������)����������������ֽ�
//2.&��������ȡ��������������ĵ�ַ
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//������Ԫ�ص�ַ������int*  +1����4���ֽ�
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//������Ԫ�ص�ַ ����int*
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//����ĵ�ַ ���� int (*)[10]  +1 һ������һ������
//	printf("%p\n", &arr+1);
//
//	return 0;
//}

//int main()
//{
//	int arr[20][20] = { 0 };
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for ( i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int k = 0;
//	printf("��������Ҫ���ҵ�����");
//	scanf("%d", k);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//		printf("\n ");
//	}
//	
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr[] = "ABCD";
//	int len = strlen(arr);
//	int k = 0;
//	scanf("%d", &k);
//	int i = 0;
//	k = k % len;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = arr[0];
//		int j = 0;
//		for ( j = 0; j < len-1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[j] = tmp;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//#define row 3
//#define col 3
//int find_num(int arr[row][col], int n, int* px, int* py)
//{
//	//�����Ͻǿ�ʼ��
//	int x = *px - 1;
//	int y = 0;
//	//�����Ͻ�������бȽ�
//	while (x >= 0 && y < *py)
//	{
//		if (n > arr[x][y])
//		{
//			y++;//num�����Ͻǵ����ִ�������һ��
//		}
//		else if (n < arr[x][y])
//		{
//			x--;//num�����Ͻǵ�����С��������һ��
//		}
//		else
//		{
//			*px = x;//num�ĺ�����
//			*py = y;//num��������
//			return 1;//��Ⱥ���ֵ����1˵���Ѿ��ҵ���
//		}
//	}
//	//����ֵ����0˵���Ҳ���
//	return 0;
//}
//int main()
//{
//	//����һ����ά���齫��ͼ���ݴ洢����
//	int arr[row][col] = { 0 };
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int x = row;//x����
//	int y = col;//y����
//	int n = 0;
//	scanf("%d", &n);
//	//��ret���ܺ�������ֵ
//	int ret = find_num(arr, n, &x, &y);
//	if (ret == 1)
//	{
//		printf("�ҵõ�\n");
//		printf("�±��ǣ�%d %d\n", x + 1, y + 1);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}



int my_check(char* n,char* m,int len)
{
	for (int i = 1; i <= len; ++i)
	{	//iΪ1ʱ��һ����ת
		char tem = *n;
		int j = 0;
		for (j = 0; j < len; ++j)
		{
			*(n + j) = *(n + j + 1);
		}
		*(n + j) = tem;//���ղ�ȡ����ֵ�ŵ����һ��Ԫ��
		if (strcmp(n, m) == 0)
		{
			return 1;
		}
	}
	
}

int main()
{
	char n[] = "AABCD";
	char m[] = "BCDAA";
	int len = strlen(n);
	if (my_check(n, m, len))

		printf("��ͬ");
	else
		printf("��ͬ");

	return 0;
}
