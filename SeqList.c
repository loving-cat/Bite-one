#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"


void SLPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SLCheckCapacity(SL* ps)
{
	assert(ps);
	//扩容
	if (ps->size == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newCapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newCapacity;
	}

}
void SLInit(SL* ps)
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SLDestroy(SL* ps)
{
	if (ps->a)
	{
		free(ps->a);
		ps->a = NULL;
		ps->size = ps->capacity = 0;
	}
}

void SLPushBack(SL* ps, SLDataType x)
{
	////空间不够 扩容
	//SLCheckCapacity(ps);
	//ps->a[ps->size] = x;
	//ps->size++;
	SLInsert(ps, ps->size, x);

}

void SLPopBack(SL* ps)
{
	//温柔的检查
	/*if (ps->size == 0)
	{
		return;
	}*/
	//暴力的检查
	assert(ps->size > 0);
	//ps->a[ps->size - 1] = 0;
	ps->size--;
}

void SLPushFront(SL* ps, SLDataType x)
{
	//assert(ps);
	//SLCheckCapacity(ps);

	////挪动数据
	//int end = ps->size - 1;
	//while (end >= 0)
	//{
	//	ps->a[end + 1] = ps->a[end];
	//	--end;
	//}
	//ps->a[0] = x;
	//ps->size++;
	SLInsert(ps, 0, x);
}

void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size > 0);
	int begin = 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}
	ps->size--;
}

//在 pos 位置插入数据
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0);
	assert(pos <= ps->size);

	SLCheckCapacity(ps);
	int end = ps->size - 1;
	while (end>=pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}

//删除pos位置数据
void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0);
	assert(pos < ps->size);
	//assert(ps->size > 0);
	int begin = pos + 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}
	ps->size--;
}

int SLFind(SL* ps, SLDataType x,int begin)
{
	assert(ps);
	for (int i = begin;i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}