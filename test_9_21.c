#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//枚举类型
//enum Color
//{
//	//枚举的可能取值
//	//每一个可能的取值是常量
//	RED = 5,
//	GREEN= 7 ,
//	BLUE = 10
//  };
//int main()
//{
//	//enum Color color = BLUE;
//	/*printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);*/
//	///int sum = RED + BLUE;
//	//printf("%d\n", sum);
//	printf("%d\n", sizeof((enum Color)));
//	return 0;
//}

//enum Color
//{
//	//枚举的可能取值
//	//每一个可能的取值是常量
//	RED = 5,
//	GREEN= 7 ,
//	BLUE = 10
//  };

//联合体（共用体）
//union Un
//{
//	char c;//1
//	int i;//4
//	double d;//8
//};
//int main()
//{
//	union Un un;
//	printf("%p\n", &un);
//	printf("%p\n", &(un.c));
//	printf("%p\n", &(un.i));
//	printf("%p\n", &(un.d));
//
//	/*printf("%d\n", sizeof(union Un));
//	printf("%d\n", sizeof(un));*/
//
//	return 0;
//}

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//		return 0;
//}

//union Un
//{
//	char arr[5];//5  对齐数1	8	1
//	int i;//4		对齐数4
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}

//union Un
//{
//	short s[6];//12
//	int i;//4 
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}

//enum ENUM_A
//{
//	X1,
//	Y1,
//	Z1 = 255,
//	A1,
//	B1,
//};
//int main()
//{
//	enum ENUM_A enumA = Y1;
//	enum ENUM_A enumB = B1;
//	printf("%d %d\n", enumA, enumB);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n", a.k);
//    return 0;
//}

void check_array(int arr[10])
{
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		if(arr[i]!=)
	}
}
#include<stdlib.h>
int main()
{
	int arr[10] = { 1,1,2,2,3,4,4,5,6,6 };
	check_array(arr);

	return 0;
}