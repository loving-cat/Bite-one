#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//�����нڵ�Ľṹ
typedef struct link 
{
	int elem;			//����������
	struct link* next;	//����ָ����ָ��ֱ�Ӻ��Ԫ��
}Link;

//ͷ��㣺ĳЩ�����У�Ϊ�˷��������⣬�����������Ŀ�ͷ����һ���ս�㣬�����Ľ��ͳ�Ϊ
// ͷ��㡣Ҳ����˵��ͷ�����λ������ͷ��������Ϊ�գ������ã��Ľ�㡣

//��Ԫ��㣺ָ��������ͷ��һ���������ݵĽ�㡣

//��ͷ�ڵ�汾
//Link* initLink()
//{
//	//��㣨�ڵ㣩
//	int i = 0;
//	//1.����ͷָ��
//	Link* p = NULL;
//	//2.����ͷ�ڵ�
//	Link* temp = (Link*)malloc(sizeof(Link));
//	temp->elem = 0;
//	temp->next = NULL;
//	//ͷָ��ָ��ͷ�ڵ�
//	p = temp;
//	//3.ÿ����һ���ڵ㣬������ֱ��ǰ���ڵ��ָ��ָ����
//	for ( i = 2; i < 5; i++)
//	{
//		//����һ���ڵ�
//		Link* a = (Link*)malloc(sizeof(Link));
//		a->elem = i;
//		a->next = NULL;
//		//ÿ��tempָ��Ľڵ����a��ֱ��ǰ���ڵ�
//		temp->next = a;
//		//tempָ����һ���ڵ㣨Ҳ����a����Ϊ�´���ӽڵ���׼��
//		temp = temp->next;
//	}
//	return p;
//}
//��ͷ�ڵ�汾
Link* initLink()
{
	//��㣨�ڵ㣩
	int i = 0;
	//1.����ͷָ��
	Link* p = NULL;
	//2.����ͷ�ڵ�
	Link* temp = (Link*)malloc(sizeof(Link));
	temp->elem = 0;
	temp->next = NULL;
	//ͷָ��ָ��ͷ�ڵ�
	p = temp;
	//3.ÿ����һ���ڵ㣬������ֱ��ǰ���ڵ��ָ��ָ����
	for (i = 1; i < 5; i++)
	{
		//����һ���ڵ�
		Link* a = (Link*)malloc(sizeof(Link));
		a->elem = i;
		a->next = NULL;
		//ÿ��tempָ��Ľڵ����a��ֱ��ǰ���ڵ�
		temp->next = a;
		//tempָ����һ���ڵ㣨Ҳ����a����Ϊ�´���ӽڵ���׼��
		temp = temp->next;
	}
	return p;
}
int main()
{

	return 0;
}