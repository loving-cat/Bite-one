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
//	//ret 就是5^6的结果，二进制中一定有1
//	//计算ret的第几位是1
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//ret的第pos位是1
//	//把arr数组中的每个元素的第pos位为1的数字异或在一起
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