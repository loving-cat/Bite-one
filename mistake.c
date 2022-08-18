#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//喝汽水
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	/*total = money;
//	empty = money;
//	while (empty >= 2 )
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}*/
//
//	printf("%d\n", total);
//	return 0;
//}

//变种水仙花数

//void print2(int arr[],int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void move_even_odd(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		//从前往后找一个偶数停下来
//		while ((left<right)&&(arr[left]%2==1))
//		{
//			left ++;
//		}
//		while ((left<right)&&(arr[right]%2==0))
//		{
//			right;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//	print2(arr, sz);
//
//}
//int main()
//{
//	int arr[] = { 1,1,7,4,8,6,9,2,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move_even_odd(arr, sz);
//	return 0;
//}


//#include<math.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int ret = pow(10, n);
//    for (i = 1; i <= ret - 1; i++)
//    {
//        printf("%d ", i);
//    }
//	return 0;
//}

//int main()
//{
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//	return 0;
//}

//int f(int n)
//{
//	static int i = 1;
//	if (n >= 5)
//		return n;
//	n = n + i;
//	i++;
//	return f(n);
//}
//int main()
//{
//	int n = 0;
//	int ret = f(n);
//	printf("%d", ret);
//	return 0;
//}

//void prt()
//{
//	for (int i = 5; i < 8; i++)
//		printf("%c", '*');
//	printf("\t");
//}
//int main()
//{
//	int i = 0;
//	for (i = 5; i <= 8; i++)
//		prt();
//	return 0;
//}\


//int main()
//{
//	int a = 3;
//	printf("%d\n", (a += a -= a * a));
//	return 0;
//}

//int main()
//{
//	int a[] = { 4,0,2,3,1 }, i, j, t;
//	for ( i = 1; i < 5; i++)
//	{
//		t = a[i];
//		j = i - 1;
//		while (j>=0&&t<a[j])
//		{
//			a[j + 1] = a[j];
//			--j;
//		}
//		a[j + 1] = t;
//	}
//	return 0;
//}