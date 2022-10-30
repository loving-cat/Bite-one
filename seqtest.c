#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void TestSeqList1()
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
void TestSeqList2()
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

void TestSeqList3()
{
	SL sl;
	SLInit(&sl);
	SLPushFront(&sl,1);
	SLPushFront(&sl,2);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 4);

	SLPrint(&sl);

	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPopFront(&sl);

	SLPrint(&sl);

	SLDestroy(&sl);

}

void TestSeqList2()
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPrint(&sl);

	SLInsert(&sl, 2, 20);
	SLPrint(&sl);

	int pos = SLFind(&sl, 5);
	if (pos != -1)
	{
		;
	}
}

void menu()
{
	printf("**********************************");
	printf("1.β������ 2,βɾ����\n");
	printf("3.ͷ������ 4,ͷɾ����\n");
	printf("5,��ӡ���� -1,�˳�\n");
	printf("**********************************");

}
int main()
{
	int option = 0;
	do
	{
		SL s;
		SLInit(&s);
		int val = 0;
		menu();
		printf("��������Ĳ���:>");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("������������Ҫβ������ݣ���-1����");
			scanf("%d", val);
			while (val != -1)
			{
				SLPushBack(&s, val);
				scanf("%d", val);

			}
			break;

		case 2:
			break;

		case 3:
			break;

		case 4:
			break;

		case 5:
			SLPrint(&s);
			break;
		default:
			break;
		}
	} while (option != -1);
	TestSeqList3();
	/*int* p1 = malloc(4);
	int* p2 = realloc(p1, 20);
	int* p3 = realloc(p2, 2000);*/
	int a[10] = { 0 };

	//Խ������������ᱻ������
	printf("%d\n", a[10]);
	printf("%d\n", a[11]);

	//Խ��д�����ܻᱻ������
	//a[10] = 0;
	//a[11]=0;
	a[12] = 0;
	//a[13]=0;
	a[14] = 0;
	a[20] = 0;
	return 0;
}