#define _CRT_SECURE_NO_WARNINGS 1
#include"sort.h"
//快速排序


//err集锦
void QuickSort(int* a, int n)
{
	int left = 0, right = n - 1;//√
	int key = a[left];			//√
	while (left < right)		//√
	{
		//右边先走，找小
		while (a[right] > key)	//×		1.key右边所有值都大于key
			--right;			//			2.左右两边有跟key相等的值
		//左边再走，找大					3.可能死循环，越界。
		while (a[left] < key)
			++left;

		Swap(&a[left], &a[right]);
	}
	Swap(&a[left], &key);	//不能跟key换，key是个变量
}

//正确
void QuickSort(int* a, int n)
{
	int left = 0, right = n - 1;
	int key = left;			
	while (left < right)		
	{
		//右边先走，找小
		while (left < right && a[right] >= a[key])	 
			--right;			
		//左边再走，找大
		while (left < right && a[left] <= a[key])
			++left;

		Swap(&a[left], &a[right]);
	}
	Swap(&a[left], &a[key]);
}

//递归
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
		//右边先走，找小
		while (left < right && a[right] >= a[key])
			--right;
		//左边再走，找大
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

//插入
//小区间优化
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

//挖坑法
int partSort2(int* a, int begin, int end)
{
	int mid = GetMinIndex(a, begin, end);
	Swap(&a[begin], &a[mid]);
	int left = begin, right = end;
	int key = left;
	int hole = left;
	while (left < right)
	{
		//右边找小，填左边坑
		while (left < right && a[right] >= key)
		{
			--right;
		}
		a[hole] = a[right];
		hole = right;

		//左边找大，填右边坑
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

//三数取中
int GetMinIndex(int* a, int begin, int end)
{
	int mid = (begin + end) / 2;
	if (a[begin] < a[mid])
	{
		if (a[mid] < a[end])
		{
			return mid;
		}
		else if (a[begin] > a[end]) //如果mid > end 那么 begin > end,由于begin < mid
		{							//所以取中间值就是取 end < begin < mid
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
	//	//小区间用直接插入替代，减少递归调用次数
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
			//右边先走，找小
			while (left < right && a[right] >= a[key])
				--right;
			//左边再走，找大
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

//前后指针版本
int PartSort3(int* a, int left, int right)
{
	int prev = left;
	int cur = left + 1;
	int key = left;
	while (cur < right)
	{
		//找到比key小的值时，跟++prev位置交换，小的往前翻，大的往后翻
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
		//小区间用直接插入替代，减少递归调用次数
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
		while (left < right && a[right] >= a[key])//如果右比key小就退出循环
			right--;
		while (left < right && a[left] <= a[key])//如果左比key大就退出循环
			left++;
		Swap(&a[left], &a[right]);//交换左右
	}
	Swap(&a[key], &a[left]);//交换key和相遇位置的元素
	return left;//返回key的位置
}
#include"StackList.h"
// 快速排序 非递归实现
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
