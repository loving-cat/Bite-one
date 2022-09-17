#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct Book
//{
//	char book_name[20];
//	char author[20];
//	int price;
//	char id[15];
//}sb3, sb4;
////sb3,sb4也是struct Book 类型的结构体变量
////是全局变量
//
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[12];
//};
//int main()
//{
//	struct Book sb1;//局部变量
//	struct Book sb2;//局部变量
//	return 0;
//}

//struct 
//{
//		char book_name[20];
//		char author[20];
//		int price;
//		char id[15];
//}sb1,sb2;//匿名结构体类型
//int main()
//{
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	//struct Node n;
//	Node n;
//	return 0;
//}


//struct Stu
//{
//	char name[20];
//	int age;
//	char id[12];
//};
//struct Book
//{
//	char book_name[20];
//	char author[20];
//	int price;
//	char id[15];
//	struct Stu s;
//}sb3 = { "肖荔BC","肖荔",88,"PG10001",{"lisi",30,"20022222"}}, sb4;
//
//struct Book sb5;
////sb3,sb4也是struct Book 类型的结构体变量
////是全局变量
//int main()
//{
//	//struct Book sb1 ={"hC++","hang",88,"HG10001"};
//	//struct Book sb2;
//	printf("%s %s %d %s %s %d %s\n", sb3.book_name, sb3.author, sb3.price, sb3.id,sb3.s.name,sb3.s.age,sb3.s.id);
//	return 0;
//}

//struct S
//{
//	char c;
//	int a;
//	float f;
//};
//int main()
//{
//	struct S s = { 'w',10,3.14f };
//	printf("%c %d %f", s.c, s.a, s.f);
//	struct S s2 = { .f=3.14f,.c='w',.a=10};
//
//	return 0;
//}


//结构体内存对齐
//offsetof
//宏
//用来计算结构体成员相对于起始位置的偏移量
//#pragma pack(4)
//struct S1
//{
//	int c1;
//	short i;
//	int c2;
//	char c3;
//	char c4;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//#include<stddef.h>
//int main()
//{
//	//struct S1 s1;
//	printf("%d\n", offsetof(struct  S1,c1));
//	printf("%d\n", offsetof(struct  S1, i));
//	printf("%d\n", offsetof(struct  S1, c2));
//	printf("%d\n", offsetof(struct  S1, c3));
//	printf("%d\n", offsetof(struct  S1, c4));
//
//
//	//printf("%d\n", sizeof(struct S1));
//	//printf("%d\n", sizeof(struct S2));
//	return 0;
//}

//设置默认对齐数
//#pragma pack(1)
//
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}
//
//struct S
//{
//	int data[1000];
//	int num;
//};
//
//void print1(struct S s)
//{
//	printf("%d %d %d %d\n", s.data[0], s.data[1], s.data[2], s.data[3]);
//}
//
//void print2(const struct S* ps)
//{
//	//printf("%d %d %d %d\n", (*ps).data[0], (*ps).data[1], (*ps).data[2], (*ps).data[3]);
//	printf("%d %d %d %d\n", ps->data[0], ps->data[1], ps->data[2], ps->data[3]);
//
//
//}
//int main()
//{
//	struct S ss = { {1,2,3,4,5},100 };
//	print1(ss);
//	print2(&ss);
//	return 0;
//}

//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//struct B
//{
//	int a;
//	short b;
//	char c;
//	int d;
//};
//
//int main()
//{
//	printf("%d", sizeof(struct A));
//	printf("%d", sizeof(struct B));
//
//	return 0;
//}

//#pragma pack(4)/*编译选项，表示4字节对齐 平台：VS2013。语言：C语言*/
//int main(int argc, char* argv[])
//{
//    struct tagTest1
//    {
//        short a;
//        char d;
//        long b;
//        long c;
//    };
//    struct tagTest2
//    {
//        long b;
//        short c;
//        char d;
//        long a;
//    };
//    struct tagTest3
//    {
//        short c;
//        long b;
//        char d;
//        long a;
//    };
//   struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//    return 0;
//}
//#pragma pack()

//typedef struct {
//	int a;
//	char b;
//	short c;
//	short d;
//}AA_t;
//int main()
//{
//	printf("%d\n", sizeof(AA_t));
//	return 0;
//}

//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

int main() {
    int n = 0;
    scanf("%d", &n);
    //while (scanf("%d", &n) != EOF)
    //{
        int i = 0;
        int j = 0;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n-i; j++)
            {
                printf("  ");
            }
            for (j = 1; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    //}

    return 0;
}