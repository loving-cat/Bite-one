#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<Stdbool.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}LTNode;

void ListInit(LTNode* phead);
LTNode* BuyListNode(LTDataType x);

void LTPushBack(LTNode* phead, LTDataType x);
void LTPopBack(LTNode* phead);

void LTPushFront(LTNode* phead, LTDataType x);
void LTPopFront(LTNode* phead);

//��pos֮ǰ����x
void LTInsert(LTNode* pos, LTDataType x);
//ɾ��posλ��
void LTErase(LTNode* pos);

bool LTEmpty(LTNode* phead);

size_t LTSize(LTNode* phead);

void LTDestroy(LTNode* phead);