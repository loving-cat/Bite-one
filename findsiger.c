#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//ret ����5^6�Ľ������������һ����1
//	//����ret�ĵڼ�λ��1
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//ret�ĵ�posλ��1
//	//��arr�����е�ÿ��Ԫ�صĵ�posλΪ1�����������һ��
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if(((arr[i]>>pos)&1) == 1)
//		{
//			num1 ^=arr[i];
//		}
//		else
//			num2 ^=arr[i];
//	}
//	printf("%d %d\n", num1, num2);
//	return 0;
//}