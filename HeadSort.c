#define _CRT_SECURE_NO_WARNINGS 1
#include"sort.h"

void AdjustDown(int* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		//确认child指向大的哪个孩子
		if (child + 1 < n && a[child + 1] > a[child])
		{
			child++;
		}
		//1.孩子大于父亲，交换，继续向下调整
		//2.孩子小于父亲，则调整结束
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void HeadSort(int* a, int n)
{
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		--end;
	}
}