#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
//��һ�ֽṹ
//��̬˳���---��̫ʵ��

//#define N 10			//�궨��
//typedef int SLDataType;//������
//typedef struct SeqList
//{
//	int a[N];
//	int size;//��¼�洢���ٸ���Ч����
//
//}SL;
//
////void SeqListInit(SL s);
//void SLInit(SL s);
//void SLPushBack(SL s, SLDataType x);

//��̬˳��� -- �������ռ�

typedef int SLDataType;//������
typedef struct SeqList
{
	SLDataType* a;
	int size;		//��¼�洢���ٸ���Ч����
	int capacity;	//�ռ�������С
}SL;

void SLInit(SL* ps);
void SLDestroy(SL* ps);
void SLPrint(SL* ps);


//β�� βɾ
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);

