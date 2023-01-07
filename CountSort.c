#define _CRT_SECURE_NO_WARNINGS 1
#include"sort.h"

//��������
//1.ͳ�Ƴ�ÿ�����ݳ��ִ���
//ֻ�ʺϷ�Χ���еģ�����������
void CountSort(int* a, int n)
{
	//�õ����ֵ����Сֵ
	int max = a[0], min = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	int range = max - min + 1;
	//int* countA = (int*)malloc(sizeof(int) * range);
	int* countA = (int*)calloc(range,sizeof(int));
	if (countA == NULL)
	{
		perror("malloc fail\n");
		exit(-1);
	}

	//1.ͳ�ƴ���
	for (int i = 0; i < n; ++i)
	{
		countA[a[i] - min]++;
	}
	//2.����
	int k = 0;
	for (int j = 0; j < range; ++j)
	{
		while (countA[j]--)
		{
			a[k++] = j + min;
		}
	}
	free(countA);
}