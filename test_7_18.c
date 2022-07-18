#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//define 定义常量
#define M 1000
#define SIZE 10

//int main()
//{
//	int arr[SIZE];
//	printf("%d\n", SIZE);
//	return 0;
//}

//define定义宏
//宏是由参数，和函数很像

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//#define ADD(x,y) ((x)+(y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum1 = Add(a, b);
//	printf("sum1 = %d\n", sum1);
//	int sum2 = ADD(a, b);
//	printf("sum2 = %d\n", sum2);
//	return 0;
//}

//%p - 打印地址，16进制数字
//int main()
//{
//	int a = 10;
//	//00000000 00000000 00000000 00001010
//	//0x	00 00	00  00	  00  00 a
//	// 0a 00 00 00
//	//printf("%p\n",&a);//取出a所占4个字节中第一个字节的地址
//	int* pa = &a;//&取地址操作符
//
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//
//	//pa 就叫：指针变量
//	return 0;
//}

//1.指针，本质是地址
//2.口头语中，说的指针是指：指针变量

//int main()
//{
//	int a = 10;
//	int* pa = &a;//&取地址操作符
//	*pa = 20; //*解引用操作
//	printf("%d\n", a);
//
//	return 0;
//}

//要想知道指针变量有多大？
//指针变量存储的是什么？ -地址
//地址的存储需要多大空间，指针变量的大小就是多大
//32位机器 - 一个地址是32个二进制位，存储需要32个bit位的空间，所32位机器上，指针变量的大小是4个字节
//64位机器 - 一个地址是64个二进制位，存储需要64个bit位的空间，所64位机器上，指针变量的大小是8个字节
//

//int main()
//{
//	printf("%zu\n", sizeof(char*));//%zu 专门打印sizeof的返回值
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//
//
//	return 0;
//}
//void test(double* pd)
//{
//	*pd = 5.6;
//}
//int main()
//{
//	double d = 3.14;
//	test(&d);
//	//double* pb = &d;
//	//*pb = 5.6;
//	//d = 5.6;
//	printf("%lf\n", d);
//	return 0;
//}

//struct Stu//类型
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[15];
//};
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).id);
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->id);
//	//结构体指针 -> 结构体成员
//}
//
//int main()
//{
//	//struct Stu s = {"zhangsan",20,"man","2022010578"};//结构体变量
//	struct Stu s = { 0 };
//	//输入
//	scanf("%s %s %s %d", s.name, s.sex, s.id, &(s.age));
//	printf("%s %d %s %s\n", s.name,s.age,s.sex,s.id);
//	printf(&s);
//	return 0;
//

/*nt main() {
	int i = 0;
	scanf("%d", &i);
	while (i)
	{
		int k = i % 10;
		printf("%d", k);
		i /= 10;
	}
	return 0;
}*/

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        if (n < 12)
//        {
//            printf("%d", 2);
//            break;
//        }
//        if (n >= 12) {
//            printf("%d",n/2)
//        }
//    }
//    return 0;
//}

//int main()
//{
//	int a = printf("Hello world!");
//	printf("\n%d", a);
//	return 0;
//}
int main()
{
	char a = 0;
	while (scanf("%c", &a) != EOF)
	{
		if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z') {
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		getchar();

	}
	
	return 0;
}