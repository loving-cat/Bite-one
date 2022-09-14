#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Point
{
	int x;
	int y;
};
void find_num_in_yuang(int arr[3][3], int k, int* px, int* py)
{
	int i = 0;
	int j = *py - 1;
	int flag = 0;
	while (i<=*px-1 && j>=0)
	{
		if (arr[i][j] < k)
		{
			i++;
		}
		else if (arr[i][j] > k)
		{
			j--;
		}
		else
		{
			//找到了
			flag = 1;
			*px = i;
			*py = j;
			break;
		}
	}
	if (flag == 1)
	{
		*px = -1;
		*py = -1;
	}
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	scanf("%d", &k);
	//遍历数组
	int x = 3;
	int y = 3;
	//返回型参数

	find_num_in_yuang(arr, k, &x, &y);
	if (x == -1 && y == -1)
		printf("找不到\n");
	else
		printf("找到了，下标是:%d %d\n", x, y);
	return 0;
}


//左旋字符
//①
//void left_move(char arr[], int k)
//{
//	//每一次只旋转一个字符，把这个动作执行K次
//	int i = 0;
//	int len = strlen(arr);
//	k %= len;
//	
//	for ( i = 0; i < k; i++)
//	{
//		char tmp = arr[0];//1
//		//2把后边的字符全部往前挪动一个位置
//		int j = 0;
//		for ( j = 0; j < len-1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		//3
//		arr[len - 1] = tmp;
//	}
//
//}
//int main()
//{
//	char arr[] = "abcdefghi";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}
//②
//#include<assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char arr[], int k)
//{
//	//每一次只旋转一个字符，把这个动作执行K次
//	int i = 0;
//	int len = strlen(arr);
//	k %= len;
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//int main()
//{
//	char arr[] = "abcdefghi";
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}
//int is_left_move(char arr1[], char arr2[])
//{
//	int len = strlen(arr1);
//	int i = 0;
//	for ( i = 0; i < len; i++)
//	{
//		char tmp = arr1[0];
//		int j = 0;
//		for ( j = 0; j < len-1; j++)
//		{
//			arr1[j] = arr1[j + 1];
//		}
//		arr1[len - 1] = tmp;
//		if (strcmp(arr1, arr2) == 0)
//		{
//			return 1;
//		} 
//	}
//	return 0;
//}
//int is_left_move(char arr1[], char arr2[])
//{
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	if (len1 != len2)
//		return 0;
//
//	strncat(arr1, arr1, len1);
//	char* ret = strstr(arr1, arr2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[20] = "ABCDEF";
//	char arr2[] = "CDEFAB";
//	int ret = is_left_move(arr1, arr2);//判断arr2是否是arr1旋转的到的
//	if (1 == ret)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}

int main()
{
	int(*(*F)(int, int));
	return 0;
}