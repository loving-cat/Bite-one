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


//尾插 尾删
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);

