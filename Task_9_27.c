#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//struct S
//{
//	int n;
//	float s;
//	int arr[];//柔性数组成员
//};
//int main()
//{
//	
//	return 0;
//}

//struct S
//{
//	int n;
//	float s;
//	int arr[];//[柔性]数组成员
//};
//int main()
//{
//	//printf("%d", sizeof(struct S));
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+sizeof(int)*4);
//	if (ps = NULL)
//	{
//		return 1;
//	}
//
//	ps->n = 100;
//	ps->s = 5.5f;
//	int i = 0;
//	for ( i = 0; i < 4; i++)
//	{
//		scanf("%d", &(ps->arr[i]));
//	}
//	printf("%d %f\n",ps->n,ps->s);
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d", ps->arr[i]);
//	}
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 10 * sizeof(int));
//	if (ptr == NULL)
//	{
//		return 1;
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

struct S
{
	int n;
	float s;
	int* arr;
};
int main()
{
	struct S*ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
		return 1;
	ps->n = 100;
	ps->s = 5.5f;
	int* ptr = (int*)malloc(4 * sizeof(int));
	if (ptr == NULL)
	{
		return 1;
	}
	else
	{
		ps->arr = ptr;
	}
	//使用
	int i = 0;
	for ( i = 0; i < 4; i++)
	{
		scanf("%d", &(ps->arr[i]));
	}
	//调整
	struct S* ptrs = (int*)realloc(ps->arr, 10 * sizeof(int));
	//打印
	printf("%d\n", ps->n);
	printf("%f\n", ps->s);
	for (i = 0; i < 4; i++)
	{
		printf("%d", ps->arr[i]);
	}
	//释放
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}