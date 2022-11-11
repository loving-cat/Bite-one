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

//在pos之前插入x
void LTInsert(LTNode* pos, LTDataType x);
//删除pos位置
void LTErase(LTNode* pos);

bool LTEmpty(LTNode* phead);

size_t LTSize(LTNode* phead);

void LTDestroy(LTNode* phead);