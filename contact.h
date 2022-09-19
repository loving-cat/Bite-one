#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
//表示一个人的信息
struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	int age;
	char addr[MAX_ADDR];
};
//通讯录
struct Contact
{
	struct PeoInfo data[MAX];
	int sz;//表示通讯中还没有信息
	//n个信息
	//再增加一个就放到下标为n的位置上
};
//初始化通讯录
void InitContact(struct Contact* pc);
//增加人的信息到通讯录
void AddContact(struct Contact* pc);

//显示通讯录中的信息
void ShowContact(const struct Contact* pc);

//删除指定联系人
void DelContact(struct Contact* pc);

//查找指定联系人
void SearchContact(const struct Contact* pc);

//修改指定联系人
void ModifyContact(struct Contact* pc);
