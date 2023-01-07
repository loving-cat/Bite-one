#define _CRT_SECURE_NO_WARNINGS 1
#include"sort.h"

//计数排序
//1.统计出每个数据出现次数
//只适合范围集中的，适用于整型
void CountSort(int* a, int n)
{
	//拿到最大值和最小值
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

	//1.统计次数
	for (int i = 0; i < n; ++i)
	{
		countA[a[i] - min]++;
	}
	//2.排序
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