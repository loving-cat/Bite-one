#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char arr[] = "i love you";
//	printf("%d", sizeof(arr));
//	return 0;
//}
//int main()\
//{
//    char a = 10;
//    char arr1[a] = {};
//    printf("%d", a); //
//    return 0;
//}
//#define a 30;
//int main()
//{
//    int b = 20;
//    int sum = a + b;
//    printf("%d", sum);
//    return 0;
//}
//enum Sex
//{
//	//下面是enum Sex 类型变量的可能取值，这三个可能取值就是枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;//性别
//	printf("%d\n", s);
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}
//int main()
//{
//    int a = 1;
//    int b = ++a;
//    printf("%d", b);
//    return 0;
//}
//int main()
//{
//    int a = 5;
//    int b = 4;
//    int n = a > b ? a : b;//当a>b为真时
//    printf("%d",n);
//    return 0;
//}
//
//int main()
//{
//    int i = 0;
//    while (scanf("%c", &i) != EOF)
//    {
//        if (i >= 'A' && i <= 'Z')
//            printf("%c\n", (i + 32));
//    }
//    getchar();
//    return 0;

//宿舍开门单片机STM32代码
//while (1)
//{
//	delay_ms(10);
//	while (!(USART_RX_STA & 0x8000))
//	{
//		continue;
//	}
//	USART_RX_STA = 0;
//	if ((USART_RX_BUF[0] != '4')
//		|| (USART_RX_BUF[1] != '5')
//		|| (USART_RX_BUF[2] != '1'))
//	{
//		continue;
//	}
//	LED = !LED;
//	DOOR = 1;
//	USART_RX_STA = 0;
//	delay_ms(1000);
//	delay_ms(1000);
//	DOOR = 0;
//}

//算100-200的素数
//int main()
//{
//	int i,j = 0;
//	for ( i = 100; i < 200; i++)
//	{
//		for ( j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("素数是=%d\n", i);
//		}
//
//	}
//	return 0;
//}

//求10个数最大值
//int main()
//{
//	int max = 0;
//	int arr[10] = { 0 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for ( i = 0; i < 10; i++)
//	{	
//		if(max<arr[i])
//		{
//			max = arr[i];
//			i++;
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int n = 0;
//	scanf("%d", &n);
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		
//		if (arr[mid] > n)
//		{
//			right = arr[mid] - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			left = arr[mid] + 1;
//		}
//		else{
//			printf("找到了，它的下标=%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("不在数组里");
//	}
//	return 0;
//}

//#include <stdio.h>
// int main()
//{
//	     int a, b, c, m, t;	
//		 printf("请输入两个数:\n");
//		  scanf("%d%d", &a, &b);
//		 if (a < b)
//		     {
//		         t = a;
//		         a = b;
//		         b = t;
//		     }
//	     m = a * b;
//	     c = a % b;
//	     while (c != 0)
//		 {
//		         a = b;
//		         b = c;
//		         c = a % b;
//		 }
//	   printf("最大公约数是:\n%d\n", b);
//	   printf("最小公倍数是:\n%d\n", m / b);
//	}
//#include<string.h>
//#include<stdio.h>
//void my_reserve(char* start, char* end)
//{
//	while (start<end)
//	{
//		char tmp = *start;
//		*start = *end;
//		*end = tmp;
//		start++;
//		end--;
//	}
//}
//int main()
//{
//	char arr[101] = { 0 };
//	gets(arr);
//	//处理
//	char* cur = arr;
//	//逆序每个单词
//	while (*cur)
//	{
//		char* start = cur;
//		char* end = cur;
//		while (*end != ' '&& *end != '\0')
//		{
//			end++;
//		}
//
//		my_reserve(start,end-1);
//		if (*end != '\0')
//			cur = end + 1;
//		else
//			cur = end;
//	}
//	//逆序整个字符串
//	int len = strlen(arr);
//	my_reserve(arr, arr + len - 1);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int A = 0;
//	int B = 0;
//	scanf("%d %d", &A, &B);
//	int m = 0;
//	int i = A;
//	int j = B;
//	//让最大值永远是A
//	if (A < B)
//	{
//		int tmp = A;
//		A = B;
//		B = tmp;
//	}
//	//辗转相除法得到最大公约数
//	while (B != 0)
//	{
//		m = A % B;
//		A = B;
//		B = m;
//	}
//	printf("%d", i*j/A);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int x = 0;
//    scanf("%d %d", &n, &x);
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= n; i++)
//    {
//        int n = i;
//        while (n)
//        {
//            if (n % 10 == x)
//                count++;
//            n /= 10;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    scanf("%d", &n);
//    int arr[50] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++)//每趟
//    {
//        for (int j = i; j < n; j++)//
//        {
//            if (arr[i] < arr[j])
//            {
//                int tmp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	//000000000000000011001000
//	unsigned char b = 100;
//	//000000000000000001100100
//	unsigned char c = 0;
//	c = a + b;
//	//11001000
//	//01100100
//	// 
//	//000000000000000011001000
//	//000000000000000001100100
//	//000000000000000100101100 - 300
//	printf("%d %d", a + b, c);
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	printf("%u", b);
//	return 0;
//}

//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//int main() {
//    int n = 0;
//    int arr[100] = { 0 };
//    scanf("%d\n", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int x = 0;
//    scanf("%d\n", &x);
//    int count = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] == x)
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i, j, n, a[100];
//    int sum = 0;
//    while (scanf("%d", &n) != EOF) {
//        for (i = 2; i <= n; i++) {
//            a[i - 2] = i;
//        }
//        for (j = 2; j <= n; j++) {
//            for (i = j - 1; i < n - 1; i++) {
//                if (a[i] % j == 0) a[i] = 0;
//            }
//        }
//        for (i = 0; i < n - 1; i++) {
//            if (a[i] != 0) printf("%d ", a[i]);
//            else sum++;
//        }printf("\n%d", sum);
//    }
//    return 0;


//#include <stdio.h>
//int main() {
//    int a = 0;
//    int b = 0;
//    int ret = 0;
//    while (scanf("%d %d", &a, &b) == 2)
//    {
//        ret = a + b;
//    }
//    printf("%d\n", ret);
//    return 0;
//}

//err 版
//#include<stdio.h>
//int main()
//{
//    int arr[20]={0};
//    int n = 0;
//    int count = 0;
//    scanf("%d",&n);
//    int i = 0;
//    for (i = 0; i < 20; i++)
//    {
//        arr[i] = i;
//        arr[2] = 1;
//         if (i > 2)
//         {
//             arr[i] = arr[i - 1] + arr[i - 2];
//         }    
//    }
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for ( i = 0; i <sz ; i++)
//    {
//        if (n != (n - 1) + (n - 2))
//        {
//            if (n < n - 1 + n - 2)
//            {
//                n -= 1;
//                count++;
//            }
//            else if (n > n - 1 + n - 2)
//            {
//                n += 1;
//                count++;
//            }
//        }
//    }
//    printf("%d\n",count);
//    return 0;
//}
//#include<stdio.h>
////求绝对值的库函数 abs
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int f1 = 0;
//	int f2 = 1;
//	int f3 = f1 + f2;
//	while (1)
//	{
//		if (n == f2)
//		{
//			printf("0\n");
//			break;
//		}
//		if (n < f2)
//		{
//			//找出n在f1 f2的最短距离
//			if (abs(f1 - n) < abs(f2 - n))
//			{
//				printf("%d\n", abs(f1 - n));
//			}
//			else
//			{
//				printf("%d\n", abs(f2 - n));
//			}
//			break;
//		}
//		f1 = f2;
//		f2 = f3;
//		f3 = f1 + f2;
//	}
//	return 0;
//}


//#include<stdio.h>
//void matt(char arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		if (arr[i] == ' ')
//		{
//			arr[i] = '%20';
//		}
//	}
//	printf("%s\n", arr);
//}
//int main()
//{
//	char arr[] = "We Are Happy";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	matt(arr,sz);
//	return 0;
//}

//替换空格 %20
//
////统计空格耳朵个数
//void replaceSpace(char *str,int length)
//{
//	int space_count = 0;
//	char* cur = str;
//	while (*cur)
//	{
//		if (*cur == ' ')
//			space_count++;
//		cur++;
//	}
//	//计算end1,end2
//	char* end1 = str + length - 1;
//	char* end2 = str + length - 1 + 2 * space_count;
//	while (end1 != end2)
//	{
//		if (*end1 == ' ')
//		{
//			*end2-- = *end1--;
//		}
//		else
//		{
//			*end2-- = '0';
//			*end2-- = '2';
//			*end2-- = '%';
//			end1--;
//		}
//	}
//}
//
//int main()
//{
//
//	return 0;
//}

//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//    int* retnum = (int*)malloc(sizeof(int) * 2);
//    for (int i = 0; i < numsSize; i++)
//    {
//        for (int j = i + 1; j < numsSize; j++)
//        {
//            if (nums[i] + nums[j] == target)
//            {
//                retnum[0] = i;
//                retnum[1] = j;
//                *returnSize = 2;
//                return retnum;
//            }
//        }
//    }
//    *returnSize = 0;
//    free(retnum);
//    retnum = NULL;
//    return  NULL;
//}

//https://leetcode.cn/problems/merge-sorted-array/
//合并2个有序数组
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//    int a = 0;
//    int b = 0;
//    int arr[m + n];
//    int cur = 0;
//    while (a != m || b != n)   //a在不等于m 或者 b不等于n 任意一个为真则进入循环
//    {
//        if (a == m)
//        {
//            cur = nums2[b++];   //当a等于m时，代表nums1数组元素读取完毕或者没有元素，cur拿取剩下的nums2数组元素
//        }
//        else if (b == n)           //同上
//        {
//            cur = nums1[a++];
//        }
//        else if (nums1[a] < nums2[b])  //当nums1数组的下标为a的元素小于nums2下标为b元素时，cur优先拿走小的nums1
//        {
//            cur = nums1[a++];
//        }
//        else
//        {
//            cur = nums2[b++];   //同上反之
//        }
//        arr[a + b - 1] = cur; //防止数组越界 a+b-1, 把上方判断赋值后的cur放入arr数组中
//    }
//    for (int i = 0; i != m + n; i++)
//    {
//        nums1[i] = arr[i];         //将arrs数组中的元素放入主函数传递的数组中
//    }
//}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int p1 = 0;
    int p2 = 0;
    int ret[2000];
    int i = 0;
    while (p1 != 1000 || p2 != 1000)
    {
        if (nums1[p1] < nums2[p2])
        {
            ret[i] = nums1[p1++];
            i++;
        }
        else
        {
            ret[i] = nums2[p2++];
            i++;
        }
    }
}

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* cur = head;
    struct ListNode* rehead = NULL;
    while (cur)
    {
        struct ListNode* next = cur->next;
        cur->next = rehead;
        rehead = cur;
        cur = next;
    }
    return rehead;
}


struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* reHead = malloc(sizeof(struct ListNode));
    reHead->next = head;
    struct ListNode* tmp = reHead;
    while (tmp->next != NULL) {
        if (tmp->next->val == val) {
            tmp->next = tmp->next->next;
        }
        else {
            tmp = tmp->next;
        }
    }
    return reHead->next;
}


while{cur->val != val}
{
    if()
}
