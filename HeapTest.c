#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

void Swap2(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
void AdjustDown2(HPDataType* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		//ȷ��childָ�����ĸ�����
		if (child + 1 < n && a[child + 1] < a[child])
		{
			child++;
		}
		//1.���Ӵ��ڸ��ף��������������µ���
		//2.����С�ڸ��ף����������
		if (a[child] < a[parent])
		{
			Swap2(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void HeapSort(int* a, int n)
{
	//���ϵ������� --N*logN
	/*for (int i = 1; i < n; i++)
	{
		AdjustUp(a, i);
	}*/
	//���µ������� -- O��N��
	//���򣺽����
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown2(a, n, i);
	}

	int end = n - 1;
	while (end > 0)
	{
		Swap2(&a[0], &a[end]);
		AdjustDown2(a, end, 0);
		end--;
	}
}
int main()
{
	return 0;
}