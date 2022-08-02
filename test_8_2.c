#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	char ch;
//	int* pa = &a;//pa有自己的地址，但是他里面存着a(别人)的地址
//	char* pc = &ch;
//	//printf("%p", &a);//拿出a的起始地址
//	//printf("%p", &a);
//	return 0;
//}

//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	char* pc = &a;
//	*pc = 0;
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("pa = %p\n", pa);
//	printf("pc = %p\n", pc);
//	printf("pa+1= %p\n", pa+1);
//	printf("pc+1= %p\n", pc+1);
// return 0;
//
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//1~10
//	int* p = arr;//数组名就是数组首元素的地址arr-->&arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p+i)=i+1;//* 解引用，是地址内的值
//	}
//	return 0
//	//for ( i = 0; i < 10; i++)
//	//{
//	//	*p = i + 1;//*p解引用，是地址内的值
//	//	p++;//地址
//	//}
//	//return 0;
//}

//int main()
//{
//	int* p;//p就是野指针
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for ( i = 0; i <=sz; i++)
//	{
//		//越界野指针
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//int* test()
//{
//	int num = 100;
//	return &num;//出函数后临时变量销毁，p记住了临时变量的地址，导致野指针
//}
//int main()
//{
//	int* p = test();
//	*p = 200;
//	return;
//}

//如何避免野指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//明确初始化
//	//NULL - 就是初始化指针的，本质就是0
//	int* p = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int* p = NULL;
//	//*p = 20;
//	int *p = &a;
//	if (p != NULL)
//	{
//		printf("%d\n", *p);
//	}
//	return 0;
//}

//int main()
//{
//	double arr[5] = { 0 };
//	double* p = arr;
//	int i = 0;
//	for ( i = 0; i < 5; i++)
//	{
//		printf("%lf ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	//两个指针相减的前提是：必须是一个相连的空间
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);
//
// //err
// int a =10;
// char c = 'w';
//	return 0;
//}

//1.计数器方法
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//}

//2.递归版本



//3.指针-指针版本
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}
//#include<stdio.h>
//void print(int* p,int sz)
//{
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ", *(p + i));
//    }
//}
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int* p = arr;
//    print(p, sz);
//    return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char a[20] = "0";
//    scanf("%s", a);
//    char* p = a;
//    char tmp = 0;
//    char* p2 = strlen(a) - 1;
//    while (p >= p2)
//    {
//        tmp = *p;
//        *p = *p2;
//        *p2 = tmp;
//        p++;
//        p2--;
//    }
//    printf("%s", a);
//    return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//void reverse(char* start, char* end)
//{
//    char tmp;
//    while (start < end)
//    {
//        tmp = *start;
//        *start = *end;
//        *end = tmp;
//        start++;
//        end--;
//    }
//}
//int main()
//{
//    char arr[1000] = { 0 };
//    gets(arr);
//    int len = strlen(arr);
//    int i = 0;
//    //将字符串整体翻转
//    reverse(arr, arr + len - 1);
//    printf("%s", arr);
//    return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int l = 0;
//	scanf("%d", &l);
//	for ( i = 1; i <=l; i++)
//	{
//		
//		for (j = 1; j <=l-i; j++)
//		{
//			printf(" ");
//		}
//		for ( j = 1; j <=2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <=l; i++)
//	{
//
//		for (j = 1; j <=i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <=2 * (l - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<math.h>
//#define M 100000
//int main() {
//    printf("0到%d的水仙花数为：\n", M);
//    for (int i = 1; i <= M; i++) {
//        //count来表示水仙花数的位数
//        int count = 1;//水仙花数至少是一位
//        int sum = 0;
//        int temp = i;
//        while (temp / 10) {
//            count++;
//            temp /= 10;
//        }
//        temp = i;//重新给temp赋值，因为temp在while循环中已经被修改了
//        while (temp) {//判断该数是否是水仙花数
//            //对temp求余是求它的每一位数，再利用pow函数对其每一位求n次方，n为它的位数
//            sum += pow(temp % 10, count);
//            //对temp除10是每次将它的最低位除去
//            temp /= 10;
//        }
//        if (i == sum) {
//            printf("%d\n", sum);
//        }
//    }
//    return 0;
//}


int main()
{
	int num = 0;
	int sum = 0;
	int tmp = 0;
	scanf("%d", &num);
	for (int i = 0; i < 5; i++)
	{
		tmp = tmp * 10 + num;
		sum = sum + tmp;
	}
	printf("sum=%d", sum);
	return 0;
}