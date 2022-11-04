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

// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SLInsertAfter(SLTNode* pos, SLTDataType x);
// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SLTEraseAfter(SLTNode* pos);


void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
void SLTErase(SLTNode** pphead, SLTNode* pos, SLTDataType x);

// �����������
void SListDestroy(SLTNode** phead);

