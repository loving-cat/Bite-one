#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"contact.h"

//静态版本
//void InitContact(struct Contact* pc)
//{
//	assert(pc);
//	pc->sz = 0;
//	memset(pc->data, 0, MAX * sizeof(struct PeoInfo));
//}

//声明一下
static int check_capacity(struct Contact* pc);

void LoadContact(struct Contact* pc)
{
	//打开文件
	FILE*pfR = fopen("data.txt", "rb");
	if (pfR == NULL)
	{
		perror("LoadContact::fopen");
		return;
	}
	//读文件
	struct PeoInfo tmp = { 0 };

	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfR))
	{
		//考虑增加容量的问题
		check_capacity(pc);

		pc->data[pc->sz] = tmp;
		pc->sz++;
	}

	//关闭文件
	fclose(pfR);
	pfR = NULL;
}
//动态增长版本
void InitContact(struct Contact* pc)
{
	assert(pc);
	pc->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (pc->data == NULL)
	{
		perror("InitContact()");
		return;
	}
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
	//加载文件中的信息，到通讯录中
	LoadContact(pc);
}
//销毁通讯录
void DestroyContact(struct Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}


//静态版本
//void AddContact(struct Contact* pc)
//{
//	assert(pc);
//	if (pc->sz == MAX)
//	{
//		printf("通讯录已满，无法添加数据\n");
//		return;
//	}
//	//增加人的信息
//	printf("请输入名字:>");
//	scanf("%s", pc->data[pc->sz].name);
//	printf("请输入性别:>");
//	scanf("%s", pc->data[pc->sz].sex);
//	printf("请输入年龄:>");
//	scanf("%d", &pc->data[pc->sz].age);
//	printf("请输入电话:>");
//	scanf("%s", pc->data[pc->sz].tele);
//	printf("请输入地址:>");
//	scanf("%s", pc->data[pc->sz].addr);
//
//	pc->sz++;//
//	printf("成功增加联系人\n");
//}

static int check_capacity(struct Contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(pc->data, (pc->capacity + 2) * sizeof(struct PeoInfo));
			//(struct PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("增容成功\n");
			return 1;
		}
		else
		{
			perror("AddContact()");
			return 0;
		}
	}
	else
		return 1;
}
//动态增长的版本
void AddContact(struct Contact* pc)
{
	assert(pc);
	if (0 == check_capacity(pc))
	{
		return;
	}
	//增加人的信息
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入年龄:>");
	scanf("%d", &pc->data[pc->sz].age);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;//
	printf("成功增加联系人\n");
}

void ShowContact(const struct Contact* pc)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "姓名", "性别", "年龄", "电话", "地址");
	for ( i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-5s\t%-5d\t%-12s\t%-30s\n", 
			pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

static int FindByName(const struct Contact* pc,char name[])
{
	int i = 0;
	for ( i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->data[i].name,name))
		{
			return i;
		}
	}
	return -1;
}
void DelContact(struct Contact* pc)
{
	char name[MAX_NAME];
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	//查找一下指定的人是否存在
	int ret = FindByName(pc, name);
	if (ret == -1)
		printf("要删除的人不存在\n");
	else
	{
		//删除
		int j = 0;
		for (j = ret; j < pc->sz-1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		printf("成功删除指定联系人\n");
	}
}

void SearchContact(struct Contact* pc)
{
	char name[MAX_NAME];
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	//查找一下指定的人是否存在
	int ret = FindByName(pc, name);
	if (ret == -1)
		printf("要查找的人不存在\n");
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "姓名", "性别", "年龄", "电话", "地址");
		printf("%-20s\t%-5s\t%-5d\t%-12s\t%-30s\n",
			pc->data[ret].name,
			pc->data[ret].sex,
			pc->data[ret].age,
			pc->data[ret].tele,
			pc->data[ret].addr);
	}
}

void ModifyContact(struct Contact* pc)
{
	char name[MAX_NAME];
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	//查找一下指定的人是否存在
	int ret = FindByName(pc, name);
	if (ret == -1)
		printf("要修改的人不存在\n");
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->data[ret].name);
		printf("请输入性别:>");
		scanf("%s", pc->data[ret].sex);
		printf("请输入年龄:>");
		scanf("%d", &pc->data[ret].age);
		printf("请输入电话:>");
		scanf("%s", pc->data[ret].tele);
		printf("请输入地址:>");
		scanf("%s", pc->data[ret].addr);

		printf("修改成功\n");
	}
}

int CmpByAge(const void* e1, const void* e2)
{
	return ((struct PeoInfo*)e1)->age - ((struct PeoInfo*)e2)->age;
}
//按照年龄来排序
void SortContact(struct Contact* pc)
{
	qsort(pc->data, pc->sz, sizeof(struct PeoInfo),CmpByAge);
}

void SaveContact(struct Contact* pc)
{
	//打开文件
	FILE *pfW = fopen("data.txt", "wb");
	if (pfW == NULL)
	{
		perror("SaveContact::fopen");
		return 1;
	}

	//写文件
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(struct PeoInfo), 1, pfW);
	}
	 
	//关闭文件
	fclose(pfW);
	pfW = NULL;
}
