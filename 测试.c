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

int main() {
    int n = 0;
    int arr[100] = { 0 };
    scanf("%d\n", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x = 0;
    scanf("%d\n", &x);
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

