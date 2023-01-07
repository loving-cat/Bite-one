#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#define GROUP 3
void shell_Sort(int* a,int n)
{
	int gap = GROUP;
	for (int j = 0;j < gap;j++)
	{
		for (int i = 0; i < n-gap; i++)
		{
			int k = i;
			int ret = a[k + gap];
			while (k >= 0)
			{
				if (ret < a[k])
				{
					a[k + gap] = a[k];
					k-=gap;
				}
				else
				{
					break;
				}
			}
			a[k + gap] = ret;
		}
	}
}

