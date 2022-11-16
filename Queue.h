#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
typedef int QDataType;
typedef struct QueueNode
{
	QDataType data;
	struct QueueNode* next;
}QNode;

//队列用双指针
//用一个结构体把指针拿着
//多个值用结构体控制
typedef struct Queue
{
	QNode* head;
	QNode* tail;
	int size;
}Queue;

//初始化队列
void QueueInit(Queue* pq);
//销毁队列
void QueueDestroy(Queue* pq);
//入队（尾插）
void QueuePush(Queue* pq, QDataType x);
//尾插
void QueuePop(Queue* pq);
//取出头，尾的数据
QDataType QueueFront(Queue* pq);
QDataType QueueBakc(Queue* pq);
//判空
bool QueueEmpty(Queue* pq);
//取队列长度
int QueueSize(Queue* pq);
