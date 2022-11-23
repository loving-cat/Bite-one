#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

//void HeapCreate(Heap* php, HPDataType* a, int n)
//{
//	assert(php);
//	HeapInit(php);
//	for (int i = 0; i < n; i++)
//	{
//		HeapPush(php, a[i]);
//	}
//}
void HeapCreate(Heap* php, HPDataType* a, int n)
{
	assert(php);
	int newCapacity = php->capacity == 0 ? 4 : php->capacity * 2;
	php->a = (HPDataType*)realloc(php->a, sizeof(HPDataType) * newCapacity);
	if (php->a == NULL)
	{
		perror("realloc fail");
		exit(-1);
	}
	memcpy(php->a, a, sizeof(HPDataType) * n);
	php->size = php->capacity = n;
	//�����㷨
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}
}
void HeapPrint(Heap* php)
{
	assert(php);
	for (int i = 0; i < php->size; i++)
	{
		printf("%d ", php->a[i]);
	}
	printf("\n");
}
void HeapInit(Heap* php)
{
	assert(php);
	php->a = NULL;
	php->size = php->capacity = 0;
}
void HeapDestroy(Heap* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
}
void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child]>a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void HeapPush(Heap* php, HPDataType x)
{
	assert(php);

	//����
	if (php->size == php->capacity)
	{
		int newCapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(php->a, sizeof(HPDataType) * newCapacity);
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		php->a = x;
		php->capacity = newCapacity;
	}
	php->a[php->size] = x;
	php->size++;

	AdjustUp(php->a, php->size - 1);
}

void AdjustDown(HPDataType* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		//ȷ��childָ�����ĸ�����
		if (child + 1 < n && a[child + 1] > a[child])
		{
			child++;
		}
		//1.���Ӵ��ڸ��ף��������������µ���
		//2.����С�ڸ��ף����������
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void HeapPop(Heap* php)
{
	assert(php);
	assert(php->size > 0);
	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;

	AdjustDown(php->a, php->size, 0);
}

HPDataType HeapTop(Heap* php)
{
	assert(php);
	return php->a[0];
}

int HeapSize(Heap* php)
{
	assert(php);
	return php->size;
}

int HeapEmpty(Heap* php)
{
	assert(php);
	return php->a == NULL;
}

void PrintTopK(int* a, int n, int k)
{
		//1.����--��a��ǰK��Ԫ�ؽ���
		int* kminHeap = (int*)malloc(sizeof(int) * k);
		assert(kminHeap);
		for (int i = 0; i < k; i++)
		{
			kminHeap[i] = a[i];
		}
		//��С��
		for (int j = (k - 1 - 1) / 2; j >= 0; --j)
		{
			AdjustDown(kminHeap, k, j);
		}
		//2.��ʣ�µ�n-k��Ԫ��������Ѷ�Ԫ�ؽ������������滻
		for (int i = k; i < n; ++i)
		{
			if (a[i] > kminHeap[0])
			{
				kminHeap[0] = a[i];
				AdjustDown(kminHeap, k, 0);
			}
		}
		//3.��ӡ��
		for (int i = 0; i < k; ++i)
		{
			printf("%d ", kminHeap[i]);
		}
		printf("\n");
		free(kminHeap);
}

void TestTopk()
{
	int n = 100000;
	int* a = (int*)malloc(sizeof(int) * n);
	srand(time(0));
	for (size_t i = 0; i < n; i++)
	{
		a[i] = rand() % 1000000;
	}
	a[5] = 1000000 + 1;
	a[1222] = 1000000 + 2;
	a[50] = 1000000 + 3;
	a[10] = 1000000 + 4;
	a[0] = 1000000 + 5;
	a[9] = 1000000 + 6;
	a[8] = 1000000 + 7;
	a[7] = 1000000 + 8;
	a[234] = 1000000 + 9;
	a[3131] = 1000000 + 10;
	PrintTopK(a, n, 10);
}