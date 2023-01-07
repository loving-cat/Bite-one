#define _CRT_SECURE_NO_WARNINGS 1
#include"sort.h"

void BubbleSort(int* a, int n)
{
	for (int j = 0; j < n; ++j)
	{
		int exchange = 0;
		//一个数一趟
		//i=0时，i<n-1 注意越界问题
		for (int i = 1; i < n-j; ++i)
		{
			//前一个数>后一个数
			if (a[i - 1] > a[i])
			{
				Swap(&a[i - 1], &a[i]);
				exchange = 1;
			}
		}
		//一趟冒泡的过程中，没有发生交换，说明已经有序
		if (exchange == 0)
		{
			break;
		}
	}
}