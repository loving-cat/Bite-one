#define _CRT_SECURE_NO_WARNINGS 1
#include"SLData.h"

LTNode* BuyListNode(LTDataType x)
{
	LTNode* node = (LTNode*)malloc(sizeof(LTNode));
	if (node == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	node->data = x;
	node->next = NULL;
	node->prev = NULL;
	return node;
}
//构造一个空的双向链表
LTNode* ListInit()
{
	LTNode* phead = BuyListNode(0);//调用上面的BuyListNode（）函数创建数据域为0的头指针指向头节点
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

void LTPrint(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	/*LTNode* newnode = BuyListNode(x);
	LTNode* tail = phead->prev;

	tail->next = newnode;
	newnode->prev = tail;

	newnode->next = phead;
	phead->prev = newnode;*/
	LTInsert(phead, x);

}
void LTPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);//不为空
	LTNode* tail = phead->prev;
	LTNode* tailPrev = tail->prev;
	tailPrev->next = phead;
	phead->prev = tailPrev;
	free(tail);
	//LTErase(phead->prev);
}

void LTPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	/*LTNode* newnode = BuyListNode(x);
	newnode->next = phead->next;
	phead->next->prev = newnode;

	phead->next = newnode;
	newnode->prev = phead;*/

	/*LTNode* newnode = BuyListNode(x);
	LTNode* first = phead->next;
	phead->next = newnode;
	newnode->prev = phead;
	newnode->next = first;
	first->prev = newnode;*/
	LTInsert(phead->next, x);

}

void LTPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);

	/*LTNode* first = phead->next;
	LTNode* second = first->next;

	free(first);

	phead->next = second;
	second->prev = phead;*/
	LTErase(phead->prev);
}

LTNode* ListFind(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
//在pos之前插入x
void LTInsert(LTNode* pos, LTDataType x)
{
	assert(pos);
	LTNode* prev = pos->prev;
	LTNode* newnode = BuyListNode(x);
	prev->next = newnode;
	newnode->prev = prev;
	newnode->next = pos;
	pos->prev = newnode;

}
//删除pos位置
void LTErase(LTNode* pos)
{
	assert(pos);

	LTNode* prev = pos->prev;
	LTNode* next = pos->next;
	free(pos);
	prev->next = next;
	next->prev = prev;
}

bool LTEmpty(LTNode* phead)
{
	assert(phead);
	return phead->next == phead;
}
size_t LTSize(LTNode* phead)
{
	assert(phead);
	size_t size = 0;
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		size++;
		cur = cur->next;
	}
	return size;
}
void LTDestroy(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* next = cur->next;
		free(cur);

		cur = next;
	}
	free(phead);
}