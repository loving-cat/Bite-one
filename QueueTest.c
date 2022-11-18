#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"



void TestQueue()
{
	Queue q1;
	Queue q2;
	QueueInit(&q1);
	QueueInit(&q2);
	QueueEmpty(&q1);
	QueueEmpty(&q2);

	QueueDestroy(&q1);
	QueueDestroy(&q2);


}
int main()
{
	TestQueue();
	return 0;
}

//leet
//typedef struct {
//	int* a;
//	int front;
//	int rear;
//	int k;
//} MyCircularQueue;
//
//
//MyCircularQueue* myCircularQueueCreate(int k) {
//	MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//	obj->a = (int*)malloc(sizeof(int) * (k + 1));
//	obj->front = obj->rear = 0;
//	obj->k = k;
//}