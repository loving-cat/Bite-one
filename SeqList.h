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
void SLCheckCapacity(SL* ps);

//β�� βɾ
void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);

//ͷ��ͷɾ
void SLPushFront(SL* ps, SLDataType x);
void SLPopFront(SL* ps);

//�м����ɾ��

//�� pos λ�ò�������
void SLInsert(SL* ps, int pos, SLDataType x);

//ɾ��posλ�õ�����
void SLErase(SL* ps, int pos);

//int SLFind(SL* ps, SLDataType x);
//begin����x����ʼλ��
int SLFind(SL* ps, SLDataType x,int begin);

