#define _CRT_SECURE_NO_WARNINGS 1

//leetcode
//typedef char STDataType;
//typedef struct Stack
//{
//	STDataType* a;
//	int capacity;
//	int top;		//ջ��Ԫ��,��ʼΪ0����ʾջ��Ԫ�ص���һ��λ�õ�����
//}ST;
//
////��ʼ��
//void StackInit(ST* ps);
////����
//void StackDestroy(ST* ps);
//
////β��βɾ
//void StackPush(ST* ps, STDataType x);
//void StackPop(ST* ps);
////ȡ��ջ������
//STDataType StackTop(ST* ps);
////ȷ���Ƿ�Ϊ��
//bool StackEmpty(ST* ps);
////�õ�ջ�ĳ���
//int StackSize(ST* ps);
//
////��ʼ��
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
//	ps->top = 0; //topΪ-1ʱָ��ջ��Ԫ�أ�Ϊ0ʱָ��ջ��Ԫ�ص���һ��
//	ps->capacity = 4;
//}
////����
//void StackDestroy(ST* ps)
//{
//	assert(ps);
//	free(ps->a);
//	ps->a = NULL;
//	ps->top = 0;
//	ps->capacity = 0;
//}
//
////β��
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
//	//top��ʼ��0ʱ
//	ps->a[ps->top] = x;
//	ps->top++;
//}
////βɾ
//void StackPop(ST* ps)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//	ps->top--;
//}
////ȡ��ջ������
//STDataType StackTop(ST* ps)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//	//topΪ0ʱ
//	return ps->a[ps->top - 1];
//
//}
////ȷ���Ƿ�Ϊ��
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
//	//�Ż�
//	return ps->top == 0;
//}
////�õ�ջ�ĳ���
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
//			//�����ƥ��
//			if ((*s == ']' && top != '[')
//				|| (*s == '}' && top != '{')
//				|| (*s == ')' && top != '('))
//			{
//				return false;
//			}
//			else//����
//			{
//				s++;
//			}
//		}
//	}
//	bool ret = StackEmpty(&st);
//	StackDestroy(&st);
//	return ret;
//}