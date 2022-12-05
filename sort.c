#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

//void InsertSort(int* a, int n)
//{
//	for (int i = 0; i < n-1; i++)
//	{
//		int end;
//		int tmp = a[end + 1];
//		while (end >= 0)
//		{
//			if (tmp < a[end])
//			{
//				a[end + 1] = a[end];
//				end--;
//			}
//			else
//			{
//				break;
//			}
//		}
//		a[end + 1] = tmp;
//	}
//}


//void InsertSort(int* a, int n)
//{
//	
//	for (int i = 0; i < n-1; i++)
//	{
//		int k = i;
//		int tmp = a[k + 1];
//		while (k >= 0) 
//		{
//			if (tmp < a[k])
//			{
//				a[k + 1] = a[k];
//				k--;
//
//			}
//			else
//			{
//				break;
//			}
//		}
//		a[k + 1] = tmp;
//	}
//}


void Insert(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int k = i;
		int tmp = a[k + 1];
		while (k>=0)
		{
			if (tmp < a[k])
			{
				a[k + 1] = a[k];
				k--;
			}
			else
			{
				break;
			}
		}
		a[k + 1] = tmp;
	}
}

int main()
{
	int a[8] = { 1,2,1,3,4,2,1,2 };
	Insert(a, 8);
	for (int m = 0; m < 8; m++)
	{
		printf("%d", a[m]);
	}
	return 0;
}



//int gap = 3;
//for (int j = 0; j < gap; j++)
//{
//	for (int i = 0; i < n - gap; i++)
//	{
//		int end = i;
//		int tmp = a[end + gap];
//		while (end >= 0)
//		{
//			if (tmp < a[end])
//			{
//				a[end + gap] = a[end];
//				end -= gap;
//			}
//			else
//			{
//				break;
//			}
//		}
//		a[end + gap] = tmp;
//	}
//}
//
////快排
//
//
////双指针
//int PartSort3(int* a, int begin, int end)
//{
//	int key = begin;
//	int cur = begin;
//	int prev = begin - 1;
//	while (cur <= end)
//	{
//		if (a[cur] < a[key])
//			cur++;
//		prev++;
//		Swap(&a[prev], &a[cur]);
//	}
//	Swap(&a[key], &a[prev]);
//	key = prev;
//	return key;
//}
//
//
////非递归
//void QuickSort(int* a, int begin, int end)
//{
//
//}
//
////归并排序
////闭区间
//void _MergeSort(int* a,int begin,int end,int* tmp)
//{
//	if (begin >= end)
//	{
//		return;
//	}
//	int mid = (begin + end) / 2;
//	//[begin,mid] [mid+1,end] 递归让子区间有序
//	_MergeSort(a, begin, mid, tmp);
//	_MergeSort(a, mid+1, end, tmp);
//
//	//归并
//	int begin1 = begin, end1 = mid;
//	int begin2 = mid+1, end2 = end;
//	int i = begin;//起始位置开始
//	while (begin1 <= end1 && begin2 <= end2)
//	{
//		if (a[begin1] < a[begin2])
//		{
//			tmp[i++] = a[begin1++];
//		}
//		else
//		{
//			tmp[i++] = a[begin2++];
//		}
//	}
//
//	while (begin1 <= end1)
//	{
//		tmp[i++] = a[begin1++];
//	}
//	while (begin2 <= end2)
//	{
//		tmp[i++] = a[begin2++];
//	}
//	memcpy(a + begin, tmp + begin, sizeof(int*) * (end-begin + 1));
//
//}
//void MergeSortNonR(int* a, int n)
//{
//	int* tmp = (int*)malloc(sizeof(int) * n);
//	if (tmp == NULL)
//	{
//		perror("malloc fail");
//		exit(-1);
//	}
//	//_MergeSort(a, 0, n - 1, tmp);
//
//	//归并每组数据个数，从1开始，因为1个认为是有序的，可以直接归并
//	int rangeN = 1;
//	while(rangeN < n)
//	{
//		for (int i = 0; i < n; i += 2 * rangeN)
//		{
//			//[begin1,end1][begin2,end2]
//			//归并
//			int begin1 = i, end1 = i + rangeN - 1;
//			int begin2 = i + rangeN, end2 = i + 2 * rangeN - 1;
//			int j = i;//起始位置开始
//			if (end1 >= n)
//			{
//				//修正区间 -> 拷贝数据，归并完了整体拷贝or 归并每组
//				end1 = n - 1;
//				//不存在的区间
//				begin 2 = n;
//				end2 = n - 1;
//			}
//			while (begin1 <= end1 && begin2 <= end2)
//			{
//				if (a[begin1] < a[begin2])
//				{
//					tmp[j++] = a[begin1++];
//				}
//				else
//				{
//					tmp[j++] = a[begin2++];
//				}
//			}
//
//			while (begin1 <= end1)
//			{
//				tmp[j++] = a[begin1++];
//			}
//			while (begin2 <= end2)
//			{
//				tmp[j++] = a[begin2++];
//			}
//			//memcpy(a + i, tmp + i, sizeof(int*) * (end2 - i + 1));
//		}
//		memcpy(a, tmp, sizeof(int) * n);
//		rangeN *= 2;
//	}
//
//	free(tmp);
//	tmp = NULL;
//}