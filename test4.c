#define _CRT_SECURE_NO_WARNINGS 1
#include"SLData.h"
//²âÊÔÎ²²åÎ²É¾
void TestList1()
{
	LTNode* phead = ListInit();
	LTPushBack(phead, 1);
	LTPushBack(phead, 2);
	LTPushBack(phead, 3);
	LTPushBack(phead, 4);
	LTPushBack(phead, 5);
	LTPrint(phead);

	LTPopBack(phead);
	LTPrint(phead);
	LTPopBack(phead);
	LTPrint(phead);
	LTPopBack(phead);
	LTPrint(phead);
	LTPopBack(phead);
	LTPrint(phead);
	LTPopBack(phead);
	LTPrint(phead);
}
//²âÊÔÍ·²åÍ·É¾
void TestList2()
{
	LTNode* phead = ListInit();
	LTPushFront(phead, 1);
	LTPushFront(phead, 2);
	LTPushFront(phead, 3);
	LTPushFront(phead, 4);
	LTPushFront(phead, 5);
	LTPrint(phead);

	LTPopFront(phead);
	LTPrint(phead);
	LTPopFront(phead);
	LTPrint(phead);
	LTPopFront(phead);
	LTPrint(phead);
	LTPopFront(phead);
	LTPrint(phead);
	LTPopFront(phead);
	LTPrint(phead);
}

//²âÊÔ²éÕÒ/ÐÞ¸Ä
void TestList3()
{
	LTNode* phead = ListInit();
	LTPushFront(phead, 1);
	LTPushFront(phead, 2);
	LTPushFront(phead, 3);
	LTPushFront(phead, 4);
	LTPushFront(phead, 5);
	LTPrint(phead);
	LTNode* pos = ListFind(phead, 3);
	if (pos)
	{
		pos->data *= 10;
	}
	LTPrint(phead);
	LTDestroy(phead);
}
int main()
{
	TestList3();
	return 0;
}