#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void Insert2(int* a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int k = i;
		//��a[k+1]��ֵ����������ֹ����ֵ�������Ҳ���
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
		//��k-- һֱ�ҵ���ret(ԭk+1)С��ֵ��break����������k�����λ�ø�ֵΪret
		a[k + 1] = ret;
	}
}

