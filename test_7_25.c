#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//编写函数（不允许创建临时变量），求字符串的长度
////编写函数，求字符串的长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abc";//a b c \0
//	int len = my_strlen(arr);//char*
//	printf("%d\n", len);
//	return 0;
//}

//递归方法
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abc";//a b c \0
//	int len = my_strlen(arr);//char*
//	printf("%d\n", len);
//	return 0;
//}

//求n的阶乘  递归
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int Fac2(int n) //迭代
//{
//	int i = 0;
//	int ret = 1;
//	for ( i = 1; i <= n ; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}

//斐波那契数列
//1 1 2 3 5 8 13 21 34 55
// 设n为其中一个数
//当 n<=2 时  为1
//当 n>2 时 为 (n-1)+(n-2)

//
//求斐波那契数 是 不适合使用递归求解的
//
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int Fib(int n)
//{
//	int a = 1;				//a = 1
//	int b = 1;				//b = 1
//	int c = 0;				//c = a + b 
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//							
//	return c; 
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//汉诺塔问题
//青蛙跳台阶
//Hannuo（n） = Hannuo(n-1)+1


//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for ( i = 1; i <=100; i++)
//	{
//		sum += (flag * 1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int step = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)	
//			step++;
//		if (i / 10 == 9)
//			step++;
//	}
//	printf("%d\n", step);
//	return 0;
//}
//int ci_fang(int n, int k)
//{
//	if (k <= 0)
//		return 1;
//	else
//		return n * ci_fang(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int i = ci_fang(n,k);
//	printf("%d", i);
//	return 0;
//}

//int DigitSum(int n)
//{
//	if (n % 10 == 0) 
//	{
//		return n;
//	}	
//	else 
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}


//int my_strlen(char* arr2)
//{
//	if (*arr2 != '\0')
//		return 1 + my_strlen(arr2 + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr2[] = "abcdef";
//	int i = my_strlen(arr2);
//	printf("%d", i);
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int st = my_strlen(arr);
//	printf("%d", st);
//	return 0;
//}

//int ADD(int x)
//{
//    if (x == 1)
//        return 1;
//    else
//        return x + ADD(x - 1);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int k = ADD(n);
//    printf("%d", k);
//    return 0;
//}

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n-1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}

//int Fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib2(n);
//	printf("%d", ret);
//	return 0;
//}
//int str(char* n)
//{
//	if (*n != '\0')
//		return 1 + str(n + 1);
//	else
//		return 0;
//}
//void reverse_string(char* string)
//{
//	int len = str(string);
//	char tmp = *string;
//	*string = string[len - 1];
//	string[len - 1] = '\0';
//	if (str(string + 1) >= 2)
//		reverse_string(string + 1);
//	string[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int N = 0;
//    int sum = 0;
//    while (scanf("%d", &N) != EOF)
//    {
//        sum = sum + N;
//    }
//    printf("%d", sum);
//    return 0;
//}

















//err
//void reverse_string(char* string)
//{
//	if (*string != '\0')
//	{
//		char tmp = *string;
//		int len = strlen(string);
//		*string = *(string + len - 1);
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr)
//	printf("%s", arr1);
//	return 0;
//}