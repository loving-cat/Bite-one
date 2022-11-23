#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<time.h>
typedef int HPDataType;

typedef struct Heap
{
	HPDataType* a;//����
	int size;
	int capacity;
}Heap;

void AdjustUp(HPDataType* a, int child);
void AdjustDown(HPDataType* a, int n, int parent);
void HeapCreate(Heap* php, HPDataType* a, int n);
void HeapPrint(Heap* php);
void HeapInit(Heap* php);
void HeapDestroy(Heap* php);
//������������һ����
void HeapPush(Heap* php,HPDataType x);

//ɾ���Ѷ������ݣ����ұ�����������һ����
void HeapPop(Heap* php);

HPDataType HeapTop(Heap* php);
// �ѵ����ݸ���
int HeapSize(Heap* php);
// �ѵ��п�
int HeapEmpty(Heap* php);

// TopK���⣺�ҳ�N�����������/��С��ǰK�����⡣
// ���磺δ��������ǰ10�����ɣ�������ͨ��ѧ������ҫ����ǰ10�ĺ��ţ�ȫ������ǰ10����ס��ȵ����ⶼ��Topk���⣬
// ��Ҫע�⣺
// ������ǰK��������K������С��
// ����С��ǰK��������K�����Ĵ��
void PrintTopK(int* a, int n, int k);
void TestTopk();


