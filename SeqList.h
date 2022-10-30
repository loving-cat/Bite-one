#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
//第一种结构
//静态顺序表---不太实用

//#define N 10			//宏定义
//typedef int SLDataType;//重命名
//typedef struct SeqList
//{
//	int a[N];
//	int size;//记录存储多少个有效数据
//
//}SL;
//
////void SeqListInit(SL s);
//void SLInit(SL s);
//void SLPushBack(SL s, SLDataType x);

//动态顺序表 -- 按需扩空间

typedef int SLDataType;//重命名
typedef struct SeqList
{
	SLDataType* a;
	int size;		//记录存储多少个有效数据
	int capacity;	//空间容量大小
}SL;

void SLInit(SL* ps);
void SLDestroy(SL* ps);
void SLPrint(SL* ps);
void SLCheckCapacity(SL* ps);

//尾插 尾删
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);

//头插头删
void SLPushFront(SL* ps, SLDataType x);
void SLPopFront(SL* ps);

//中间插入删除

//在 pos 位置插入数据
void SLInsert(SL* ps, int pos, SLDataType x);

//删除pos位置的数据
void SLErase(SL* ps, int pos);

//int SLFind(SL* ps, SLDataType x);
//begin查找x的起始位置
int SLFind(SL* ps, SLDataType x,int begin);

