#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct S
//{
//	int a;
//	int b;
//	int c;
//	int d;
//};
////位段 - 其中的位其实是二进制位
//struct A //位段类型
//{
//	//4byte - 32bit
//	int _a : 2; //-2剩30 // 意思是 这个a成员只需要2个bit位
//	int _b : 5; //-5剩25 //  b成员只需要5个
//	int _c : 10;//-10剩15 //  同上
//	int _d : 30;//再次开辟4个字节空间
//	//4byte - 32bit
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

//struct S
//{
//	char a : 3;	//char - 1字节 - 8比特位
//	char b : 4;
//	char c : 5;
//	char d : 4;
//
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	/*struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;*/
//
//	return 0;
//}
//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }*pstPimData;
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}


























































































































































