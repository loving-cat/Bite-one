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
	int top;		//栈顶元素
}ST;

//初始化
void StackInit(ST* ps);
//销毁
void StackDestroy(ST* ps);

//尾插尾删
void StackPush(ST* ps, STDataType x);
void StackPop(ST* ps);
//取得栈顶数据
STDataType StackTop(ST* ps); 
//确认是否为空
bool StackEmpty(ST* ps);
//拿到栈的长度
int StackSize(ST* ps);