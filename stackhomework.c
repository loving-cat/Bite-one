#define _CRT_SECURE_NO_WARNINGS 1

//leetcode
//typedef char STDataType;
//typedef struct Stack
//{
//	STDataType* a;
//	int capacity;
//	int top;		//栈顶元素,初始为0，表示栈顶元素的下一个位置的坐标
//}ST;
//
////初始化
//void StackInit(ST* ps);
////销毁
//void StackDestroy(ST* ps);
//
////尾插尾删
//void StackPush(ST* ps, STDataType x);
//void StackPop(ST* ps);
////取得栈顶数据
//STDataType StackTop(ST* ps);
////确认是否为空
//bool StackEmpty(ST* ps);
////拿到栈的长度
//int StackSize(ST* ps);
//
////初始化
//void StackInit(ST* ps)
//{
//	assert(ps);
//	//ps->a = NULL;
//	//ps->top = 0;
//	//ps->capacity = 0;
//
//	ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
//	if (ps->a == NULL)
//	{
//		perror("malloc fail");
//		exit(-1);
//	}
//	ps->top = 0; //top为-1时指向栈顶元素，为0时指向栈顶元素的下一个
//	ps->capacity = 4;
//}
////销毁
//void StackDestroy(ST* ps)
//{
//	assert(ps);
//	free(ps->a);
//	ps->a = NULL;
//	ps->top = 0;
//	ps->capacity = 0;
//}
//
////尾插
//void StackPush(ST* ps, STDataType x)
//{
//	assert(ps);
//	if (ps->top == ps->capacity)
//	{
//		STDataType* tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(STDataType));
//		if (tmp == NULL)
//		{
//			perror("realloc fail");
//			exit(-1);
//		}
//		ps->a = tmp;
//		ps->capacity *= 2;
//	}
//	//top初始化0时
//	ps->a[ps->top] = x;
//	ps->top++;
//}
////尾删
//void StackPop(ST* ps)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//	ps->top--;
//}
////取得栈顶数据
//STDataType StackTop(ST* ps)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//	//top为0时
//	return ps->a[ps->top - 1];
//
//}
////确认是否为空
//bool StackEmpty(ST* ps)
//{
//	assert(ps);
//	/*if (ps->top == 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}*/
//	//优化
//	return ps->top == 0;
//}
////拿到栈的长度
//int StackSize(ST* ps)
//{
//	assert(ps);
//	return ps->top;
//}
//
//bool isValid(char* s) {
//	ST st;
//	StackInit(&st);
//	while (*s)
//	{
//		if (*s == '[' || *s == '(' || *s == '{')
//		{
//			StackPush(&st, *s);
//			s++;
//		}
//		else
//		{
//			if (StackEmpty(&st))
//				return false;
//			char top = StackTop(&st);
//			StackPop(&st);
//			//如果不匹配
//			if ((*s == ']' && top != '[')
//				|| (*s == '}' && top != '{')
//				|| (*s == ')' && top != '('))
//			{
//				return false;
//			}
//			else//继续
//			{
//				s++;
//			}
//		}
//	}
//	bool ret = StackEmpty(&st);
//	StackDestroy(&st);
//	return ret;
//}