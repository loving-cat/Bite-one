#define _CRT_SECURE_NO_WARNINGS 1
#include"sort.h"

void BubbleSort(int* a, int n)
{
	for (int j = 0; j < n; ++j)
	{
		int exchange = 0;
		//һ����һ��
		//i=0ʱ��i<n-1 ע��Խ������
		for (int i = 1; i < n-j; ++i)
		{
			//ǰһ����>��һ����
			if (a[i - 1] > a[i])
			{
				Swap(&a[i - 1], &a[i]);
				exchange = 1;
			}
		}
		//һ��ð�ݵĹ����У�û�з���������˵���Ѿ�����
		if (exchange == 0)
		{
			break;
		}
	}
}