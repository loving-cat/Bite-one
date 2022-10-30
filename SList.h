#pragma once

#include<stdio.h>
#include<stdlib.h>

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

SLTNode* BuySLTNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

SLTNode* CreateSList(int n)
{
	SLTNode* phead = NULL, * ptail = NULL;	//½Úµã
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		//scanf("%d", &x);
		//SLTNode* newnode = BuySLTNode(x);
		SLTNode* newnode = BuySLTNode(i+10);

		if (phead == NULL)
		{
			ptail = phead = newnode;
		}
		else
		{
			ptail->next = newnode; //n1->next = n2   n2->next = n3
			ptail = newnode;		// n1 = n2;		n2 = n3;
		}
	}
	//ptail->next = NULL;
	return phead;
}

void SLTPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
