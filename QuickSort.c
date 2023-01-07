#define _CRT_SECURE_NO_WARNINGS 1
#include"sort.h"
//��������


//err����
void QuickSort(int* a, int n)
{
	int left = 0, right = n - 1;//��
	int key = a[left];			//��
	while (left < right)		//��
	{
		//�ұ����ߣ���С
		while (a[right] > key)	//��		1.key�ұ�����ֵ������key
			--right;			//			2.���������и�key��ȵ�ֵ
		//������ߣ��Ҵ�					3.������ѭ����Խ�硣
		while (a[left] < key)
			++left;

		Swap(&a[left], &a[right]);
	}
	Swap(&a[left], &key);	//���ܸ�key����key�Ǹ�����
}

//��ȷ
void QuickSort(int* a, int n)
{
	int left = 0, right = n - 1;
	int key = left;			
	while (left < right)		
	{
		//�ұ����ߣ���С
		while (left < right && a[right] >= a[key])	 
			--right;			
		//������ߣ��Ҵ�
		while (left < right && a[left] <= a[key])
			++left;

		Swap(&a[left], &a[right]);
	}
	Swap(&a[left], &a[key]);
}

//�ݹ�
void QuickSort(int* a, int begin,int end)
{
	if (begin >= end)
	{
		return;
	}
	int left = begin, right = end;
	int key = left;
	while (left < right)
	{
		//�ұ����ߣ���С
		while (left < right && a[right] >= a[key])
			--right;
		//������ߣ��Ҵ�
		while (left < right && a[left] <= a[key])
			++left;

		Swap(&a[left], &a[right]);
	}
	Swap(&a[left], &a[key]);
	key = left;
	//[begin,key-1],[key+1,end]
	QuickSort(a, begin, key - 1);
	QuickSort(a, key + 1, end);
}

//����
//С�����Ż�
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		int k = i;
		int tmp = a[k + 1];
		while (k > 0)
		{
			if (tmp < a[k])
			{
				a[k + 1] = a[k];
				--k;
			}
			else
			{
				break;
			}
		}
		a[k + 1] = tmp;
	}
}

//�ڿӷ�
int partSort2(int* a, int begin, int end)
{
	int mid = GetMinIndex(a, begin, end);
	Swap(&a[begin], &a[mid]);
	int left = begin, right = end;
	int key = left;
	int hole = left;
	while (left < right)
	{
		//�ұ���С������߿�
		while (left < right && a[right] >= key)
		{
			--right;
		}
		a[hole] = a[right];
		hole = right;

		//����Ҵ����ұ߿�
		while (left < right && a[left] <= key)
		{
			++left;
		}
		a[hole] = a[left];
		hole = left;
	}
	Swap(&a[left], &a[key]);
	key = left;
	return key;
}

//����ȡ��
int GetMinIndex(int* a, int begin, int end)
{
	int mid = (begin + end) / 2;
	if (a[begin] < a[mid])
	{
		if (a[mid] < a[end])
		{
			return mid;
		}
		else if (a[begin] > a[end]) //���mid > end ��ô begin > end,����begin < mid
		{							//����ȡ�м�ֵ����ȡ end < begin < mid
			return begin;
		}
		else
		{
			return end;
		}
	}
	else //a[begin] > a[mid]
	{
		if (a[mid] > a[end])
		{
			return mid;
		}
		else if (a[begin] < a[end])				//end > begin > mid
		{
			return begin;
		}
		else
		{
			return end;
		}
	}
}
void QuickSort(int* a, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}

	//if ((end - begin + 1) < 15)
	//{
	//	//С������ֱ�Ӳ�����������ٵݹ���ô���
	//	InsertSort(a + begin, end - begin + 1);
	//}
	//else
	//{
		int mid = GetMinIndex(a, begin, end);
		Swap(&a[begin], &a[mid]);

		int left = begin, right = end;
		int key = left;
		while (left < right)
		{
			//�ұ����ߣ���С
			while (left < right && a[right] >= a[key])
				--right;
			//������ߣ��Ҵ�
			while (left < right && a[left] <= a[key])
				++left;

			Swap(&a[left], &a[right]);
		}
		Swap(&a[left], &a[key]);
		key = left;
		//[begin,key-1],[key+1,end]
		QuickSort(a, begin, key - 1);
		QuickSort(a, key + 1, end);
	//}
}

//ǰ��ָ��汾
int PartSort3(int* a, int left, int right)
{
	int prev = left;
	int cur = left + 1;
	int key = left;
	while (cur < right)
	{
		//�ҵ���keyС��ֵʱ����++prevλ�ý�����С����ǰ�����������
		if (a[cur] < a[key] && ++prev != cur)
		{
			Swap(a[++prev],a[cur]);
		}
		++cur;
	}
	Swap(&a[prev], &a[key]);
	key = prev;
	return key;
}
void QuickSort(int* a, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}

	if ((end - begin + 1) < 15)
	{
		//С������ֱ�Ӳ�����������ٵݹ���ô���
		InsertSort(a + begin, end - begin + 1);
	}
	else
	{
		int key = PartSort3(a, begin, end);
	//[begin,key-1],[key+1,end]
		QuickSort(a, begin, key - 1);
		QuickSort(a, key + 1, end);
	}
}

int PartSort1(int* a, int left, int right)
{
	int key = left;
	while (left < right)
	{
		while (left < right && a[right] >= a[key])//����ұ�keyС���˳�ѭ��
			right--;
		while (left < right && a[left] <= a[key])//������key����˳�ѭ��
			left++;
		Swap(&a[left], &a[right]);//��������
	}
	Swap(&a[key], &a[left]);//����key������λ�õ�Ԫ��
	return left;//����key��λ��
}
#include"StackList.h"
// �������� �ǵݹ�ʵ��
void QuickSortNonR(int* a, int begin, int end)
{
	ST st;
	StackInit(&st);
	StackPush(&st, begin);
	StackPush(&st, end);

	while (StackEmpty(&st))
	{
		int right = StackTop(&st);
		StackPop(&st);
		int left = StackTop(&st);
		StackPop(&st);

		int key = PartSort1(a, left, right);
		//[left,key-1] key [key+1,right]
		if (key + 1 < right)
		{
			StackPush(&st, key + 1);
			StackPush(&st, right);
		}
		if (left < key - 1)
		{
			StackPush(&st, left);
			StackPush(&st, key - 1);
		}
		StackPush(&st, key + 1);
		StackPush(&st, right);
		StackPush(&st, left);
		StackPush(&st, key - 1);

	}
	StackDestroy(&st);
}
