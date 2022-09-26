#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#define DEFAULT_SZ 3
#define INC_SZ 2;
//��ʾһ���˵���Ϣ
struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	int age;
	char addr[MAX_ADDR];
};
//ͨѶ¼
//��̬�汾
//struct Contact
//{
//	struct PeoInfo data[MAX];
//	int sz;//��ʾͨѶ�л�û����Ϣ
//	//n����Ϣ
//	//������һ���ͷŵ��±�Ϊn��λ����
//};

struct Contact
{
	struct PeoInfo* data;//ָ���˴�����ݵĿռ�
	int sz;//��ǰ���˼����˵���Ϣ
	int capacity;//����
};


//��ʼ��ͨѶ¼
void InitContact(struct Contact* pc);
//�����˵���Ϣ��ͨѶ¼
void AddContact(struct Contact* pc);

//��ʾͨѶ¼�е���Ϣ
void ShowContact(const struct Contact* pc);

//ɾ��ָ����ϵ��
void DelContact(struct Contact* pc);

//����ָ����ϵ��
void SearchContact(const struct Contact* pc);

//�޸�ָ����ϵ��
void ModifyContact(struct Contact* pc);

//������ϵ��
void SortContact(struct Contact* pc);

//����ͨѶ¼
void DestroyContact(struct Contact* pc);

