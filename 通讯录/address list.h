#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

enum address_list
{
	creat = 1,
	search,
	modify,
	sort,
	special,
};

//��ϵ�˵Ļ����ṹ
typedef struct PeopleInform
{
	char name[20];
	char tel[13];
}PeopleInform;
typedef struct Contact
{
    PeopleInform* person;
	int count;
	struct Contact* p;
}contact;

//���ú�������
void menu();
void Creat_New();
void Modify_List();
void Sort_List();
void Special();
