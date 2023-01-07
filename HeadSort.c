#define _CRT_SECURE_NO_WARNINGS 1
#include"sort.h"

void AdjustDown(int* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		//ȷ��childָ�����ĸ�����
		if (child + 1 < n && a[child + 1] > a[child])
		{
			child++;
		}
		//1.���Ӵ��ڸ��ף��������������µ���
		//2.����С�ڸ��ף����������
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