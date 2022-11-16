#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

//初始化队列
void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = NULL;
	pq->tail = NULL;
	pq->size = 0;
}
//销毁队列
void QueueDestroy(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	while (cur != NULL)
	{
		QNode* del = cur;
		cur = cur->next;
		free(del);
		del = NULL;
	}
	pq->head = pq->tail = NULL;
	pq->size = 0;
}
//入队（尾插）
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}

	newnode->data = x;
	newnode->next = NULL;
	if (pq->tail == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;	
	}
	pq->size++;
}
//尾插
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QNode* del = pq->head;
		pq->head = pq->head->next;
		free(del);
	}
	pq->size--;
}
//取出头，尾的数据
QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->head->data;
}
QDataType QueueBakc(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->tail->data;
}
//判空
bool QueueEmpty(Queue* pq)
{
	assert(pq);

	return pq->head == NULL && pq->tail == NULL;
}
//取队列长度
int QueueSize(Queue* pq)
{
	assert(pq);
	/*int size = 0;
	QNode* cur = pq->head;
	while (cur)
	{
		cur = cur->next;
		size++;
	}
	return size;*/
	//优化
	return pq->size;
}
