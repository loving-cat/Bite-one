#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

SLTNode* BuySLTNode(SLTDataType x);
SLTNode* CreateSList(int n);
void SLTPrint(SLTNode* phead);
SLTNode* SListFind(SLTNode* phead, SLTDataType x);

void SLTPushBack(SLTNode* phead, SLTDataType x);
void SLTPopBack(SLTNode* phead);
void SLTPushFront(SLTNode** pphead, SLTDataType x);
void SLTPopFront(SLTNode** pphead);

// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？
void SLInsertAfter(SLTNode* pos, SLTDataType x);
// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？
void SLTEraseAfter(SLTNode* pos);


void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
void SLTErase(SLTNode** pphead, SLTNode* pos, SLTDataType x);

// 单链表的销毁
void SListDestroy(SLTNode** phead);

