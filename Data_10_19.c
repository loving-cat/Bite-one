#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//链表中节点的结构
typedef struct link 
{
	int elem;			//代表数据域
	struct link* next;	//代表指针域，指向直接后继元素
}Link;

//头结点：某些场景中，为了方便解决问题，会故意在链表的开头放置一个空结点，这样的结点就称为
// 头结点。也就是说，头结点是位于链表开头、数据域为空（不利用）的结点。

//首元结点：指的是链表开头第一个存有数据的结点。

//无头节点版本
//Link* initLink()
//{
//	//结点（节点）
//	int i = 0;
//	//1.创建头指针
//	Link* p = NULL;
//	//2.创建头节点
//	Link* temp = (Link*)malloc(sizeof(Link));
//	temp->elem = 0;
//	temp->next = NULL;
//	//头指针指向头节点
//	p = temp;
//	//3.每创建一个节点，都令其直接前驱节点的指针指向它
//	for ( i = 2; i < 5; i++)
//	{
//		//创建一个节点
//		Link* a = (Link*)malloc(sizeof(Link));
//		a->elem = i;
//		a->next = NULL;
//		//每次temp指向的节点就是a的直接前驱节点
//		temp->next = a;
//		//temp指向下一个节点（也就是a），为下次添加节点做准备
//		temp = temp->next;
//	}
//	return p;
//}
//有头节点版本
Link* initLink()
{
	//结点（节点）
	int i = 0;
	//1.创建头指针
	Link* p = NULL;
	//2.创建头节点
	Link* temp = (Link*)malloc(sizeof(Link));
	temp->elem = 0;
	temp->next = NULL;
	//头指针指向头节点
	p = temp;
	//3.每创建一个节点，都令其直接前驱节点的指针指向它
	for (i = 1; i < 5; i++)
	{
		//创建一个节点
		Link* a = (Link*)malloc(sizeof(Link));
		a->elem = i;
		a->next = NULL;
		//每次temp指向的节点就是a的直接前驱节点
		temp->next = a;
		//temp指向下一个节点（也就是a），为下次添加节点做准备
		temp = temp->next;
	}
	return p;
}
int main()
{

	return 0;
}