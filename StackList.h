#pragma once

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int capacity;
	int top;		//ջ��Ԫ��
}ST;

//��ʼ��
void StackInit(ST* ps);
//����
void StackDestroy(ST* ps);

//β��βɾ
void StackPush(ST* ps, STDataType x);
void StackPop(ST* ps);
//ȡ��ջ������
STDataType StackTop(ST* ps); 
//ȷ���Ƿ�Ϊ��
bool StackEmpty(ST* ps);
//�õ�ջ�ĳ���
int StackSize(ST* ps);