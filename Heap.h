#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<time.h>
typedef int HPDataType;

typedef struct Heap
{
	HPDataType* a;//数组
	int size;
	int capacity;
}Heap;

void AdjustUp(HPDataType* a, int child);
void AdjustDown(HPDataType* a, int n, int parent);
void HeapCreate(Heap* php, HPDataType* a, int n);
void HeapPrint(Heap* php);
void HeapInit(Heap* php);
void HeapDestroy(Heap* php);
//保持它继续是一个堆
void HeapPush(Heap* php,HPDataType x);

//删除堆顶的数据，并且保持它继续是一个堆
void HeapPop(Heap* php);

HPDataType HeapTop(Heap* php);
// 堆的数据个数
int HeapSize(Heap* php);
// 堆的判空
int HeapEmpty(Heap* php);

// TopK问题：找出N个数里面最大/最小的前K个问题。
// 比如：未央区排名前10的泡馍，西安交通大学王者荣耀排名前10的韩信，全国排名前10的李白。等等问题都是Topk问题，
// 需要注意：
// 找最大的前K个，建立K个数的小堆
// 找最小的前K个，建立K个数的大堆
void PrintTopK(int* a, int n, int k);
void TestTopk();


