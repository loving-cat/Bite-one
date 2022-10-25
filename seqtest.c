#define _CRT_SECURE_NO_WARNINGS 1
#include"SeaList.h"

void TestSeaList1()
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	SLPrint(&sl);
	SLDestroy(&sl);
}
void TestSeaList2()
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 0);
	SLPrint(&sl);

	SLPushBack(&sl, 8);
	SLPrint(&sl);

	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);
	SLPopBack(&sl);

	SLPrint(&sl);

	SLDestroy(&sl);
}
int main()
{
	TestSeaList2();
	/*int* p1 = malloc(4);
	int* p2 = realloc(p1, 20);
	int* p3 = realloc(p2, 2000);*/


	return 0;
}