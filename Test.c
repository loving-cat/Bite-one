#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void TestSList1()
{
	/*SLTNode* n1 = BuySLTNode(1);
	SLTNode* n2 = BuySLTNode(2);
	SLTNode* n3 = BuySLTNode(3);
	SLTNode* n4 = BuySLTNode(4);
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;*/
	SLTNode* plist = CreateSList(10);
	SLTPrint(plist);

}
int main()
{
	TestSList1();
	return 0;
}