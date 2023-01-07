#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Insert2(int* a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int k = i;
		//把a[k+1]的值存起来，防止后续值被覆盖找不到
		int ret = a[k + 1];
		while (k >= 0)
		{
			if (ret < a[k])
			{
				a[k + 1] = a[k];
				k--;
			}
			else
			{
				break;
			}
		}
		//当k-- 一直找到比ret(原k+1)小的值后break跳出来，将k后面的位置赋值为ret
		a[k + 1] = ret;
	}
}

