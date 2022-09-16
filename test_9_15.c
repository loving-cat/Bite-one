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
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
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
//
//	//printf("%d\n", sizeof(struct S1));
//	//printf("%d\n", sizeof(struct S2));
//	return 0;
//}

//设置默认对齐数
#pragma pack(1)

struct S1
{
	char c1;
	int i;
	char c2;
};

#pragma pack()

int main()
{
	printf("%d\n", sizeof(struct S1));
	return 0;
}

struct S
{
	int data[1000];
	int num;
};

void print1(struct S s)
{
	printf("%d %d %d %d\n", s.data[0], s.data[1], s.data[2], s.data[3]);
}

void print2(const struct S* ps)
{
	//printf("%d %d %d %d\n", (*ps).data[0], (*ps).data[1], (*ps).data[2], (*ps).data[3]);
	printf("%d %d %d %d\n", ps->data[0], ps->data[1], ps->data[2], ps->data[3]);


}
int main()
{
	struct S ss = { {1,2,3,4,5},100 };
	print1(ss);
	print2(&ss);
	return 0;
}