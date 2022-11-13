#define _CRT_SECURE_NO_WARNINGS 1
#include"StackList.h"

//初始化
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
//销毁
void StackDestroy(ST* ps)
{
	assert(ps);

}

//尾插尾删
void StackPush(ST* ps, STDataType x)
{

}
void StackPop(ST* ps)
{

}
//取得栈顶数据
STDataType StackTop(ST* ps)
{

}
//确认是否为空
bool StackEmpty(ST* ps)
{

}
//拿到栈的长度
int StackSize(ST* ps)
{

}