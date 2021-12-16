#pragma once

#define nameM 20
#define telM 13
#define sexM 5
#define DefaultNum 2
#define Plus 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>

enum address_list
{
	creat = 1,
	show,
	search,
	modify,
	sort,
	special,
};

//��ϵ�˵Ļ����ṹ
typedef struct PeopleInform
{
	char name[nameM];
	char tel[telM];
	char sex[sexM];
}PeopleInform;

//contact�ṹ�壬����������Ϣ���������Լ��ṹ��ָ��
typedef struct Contact
{
    PeopleInform* person;
	int count;//��¼��������ϵ������
	int capacity;//������¼����������
}contact;

//���ú�������

//�˵�
void menu();

//�˵�1
void menu1();

//��ʼ���ṹ��
void Init(contact* ps);

//����Ƿ���Ա
void Check(contact* ps);

//������ϵ��
void Creat_New(contact* ps);

//չʾ��ϵ����¼
void Show(contact* ps);

//������ϵ��
void Search(contact* ps);

//ɾ����ϵ��
void Modify_List(contact* ps);

//����
void Sort_List();

void Special();
