#define _CRT_SECURE_NO_WARNINGS 1
#include"StackList.h"

//��ʼ��
void StackInit(ST* ps)
{
	assert(ps);
	//ps->a = NULL;
	//ps->top = 0;
	//ps->capacity = 0;

	ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (ps->a == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	ps->top = 0;
	ps->capacity = 4;
}
//����
void StackDestroy(ST* ps)
{
	assert(ps);

}

//β��βɾ
void StackPush(ST* ps, STDataType x)
{

}
void StackPop(ST* ps)
{

}
//ȡ��ջ������
STDataType StackTop(ST* ps)
{

}
//ȷ���Ƿ�Ϊ��
bool StackEmpty(ST* ps)
{

}
//�õ�ջ�ĳ���
int StackSize(ST* ps)
{

}