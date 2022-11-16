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

//������˫ָ��
//��һ���ṹ���ָ������
//���ֵ�ýṹ�����
typedef struct Queue
{
	QNode* head;
	QNode* tail;
	int size;
}Queue;

//��ʼ������
void QueueInit(Queue* pq);
//���ٶ���
void QueueDestroy(Queue* pq);
//��ӣ�β�壩
void QueuePush(Queue* pq, QDataType x);
//β��
void QueuePop(Queue* pq);
//ȡ��ͷ��β������
QDataType QueueFront(Queue* pq);
QDataType QueueBakc(Queue* pq);
//�п�
bool QueueEmpty(Queue* pq);
//ȡ���г���
int QueueSize(Queue* pq);
