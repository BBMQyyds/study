#define _CRT_SECURE_NO_WARNINGS 1

#include "address list.h"

void menu()
{
	printf("ͨѶ¼1.10\n�������ڿ�����ͨѶ¼��Ŀǰ�ǲ��԰�\n");
	printf("Ŀǰ�����¹���:\n");
	printf("******************************************************************\n");
}

void menu1()
{
	printf("1.������ϵ��  2.չʾ�б�  3.������ϵ��  4.ɾ����ϵ��  5.������ϵ��\n");
	printf("��ѡ��:>");
}

void Init(contact*ps)
{
	//Ϊ��ϵ�����ݿ��ٿռ�
	ps->person = (PeopleInform*)malloc(DefaultNum*sizeof(PeopleInform));
	if (ps == NULL)
	{
		perror("�����ˣ�����ϵ��");
		return;
	}
	ps->count = 0;
	ps->capacity = DefaultNum;
}

void Check(contact* ps)
{
	//�Ƿ�����
	if (ps->count == ps->capacity)
	{
		PeopleInform* p = (PeopleInform*)realloc(ps->person,(DefaultNum+Plus)*sizeof(PeopleInform));
		if (p != NULL)
		{
			ps->person = p;
			ps->capacity += Plus;
		}
		else
		{
			perror("����ʧ�ܣ�����ϵ��");
		}
	}
}

void Creat_New(contact* ps)
{
	Check(ps);
	int is_right = 1;
	while (is_right)
	{
		printf("��������ϵ������(����ʮ���ַ�):>");
		scanf("%s", ps->person->name);
		if (strlen(ps->person->name) > 20)
			printf("��������޶ȣ�����������\n");
		else
		{
			printf("��������ϵ�˵绰(�Ǵ�½�����0x):>");
			scanf("%s", ps->person->tel);
			if (strlen(ps->person->tel) > 13)
			{
				printf("��������޶ȣ�����������\n");
			}
			else
			{
				printf("�������Ա�:>");
				scanf("%s", ps->person->sex);
				is_right = 0;
				printf("�����ɹ�!");
				Sleep(1000);
				system("cls");
				ps->person++;
				ps->count++;
			}
		}
	}
}

void Show(contact* ps)
{
	int i = ps->count;
	while (i)
	{
		printf("����              �绰����\n");
		printf("%s(%s)%16s\n", ps->person->name, ps->person->sex, ps->person->tel);
		i--;
		ps->person++;
		system("pause");
		system("cls");
	}
}

void Search(contact* ps)
{
	printf("ѡ����ҷ�ʽ��1.�������� 2.���ϲ���:>");
	int choose = 1;
	int whether = 0;
	while (choose)
	{
		scanf("%d", &choose);
		if (choose == 1)
		{
			printf("������Ҫ���ҵ���ϵ�˵�����:>");
			char name[nameM] = "";
			scanf("%s", &name);
			int i = ps->count;
			PeopleInform* ptr = ps->person;
			while (i)
			{
				if (0 == (strcmp(name, ptr->name)))
				{
					printf("����ϵ����Ϣ����\n");
					printf("����              �绰����\n");
					printf("%s(%s)%16s\n", ps->person->name, ps->person->sex, ps->person->tel);
					whether++;
				}
				ptr++;
				i--;
			}
			if (whether == 0)
				printf("����ϵ�˲�����");
			system("pause");
			system("cls");
			break;
		}
		else if (2 == choose)
		{
			printf("������Ҫ���ҵ���ϵ�˵���:>");
			char name[nameM] = "";
			scanf("%s", &name);
			int i = ps->count;
			PeopleInform* ptr = ps->person;
			while (i)
			{
				if (0 == strncmp(name, ptr->name, strlen(name)))
				{
					printf("����              �绰����\n");
					printf("%s(%s)%16s\n", ps->person->name, ps->person->sex, ps->person->tel);
				}
				ptr++;
				i--;
				whether++;
			}
			if (whether == 0)
				printf("����ϵ�˲�����\n");
			system("pause");
			system("cls");
			break;
		}
		else
		{
			printf("ѡ�����,����ѡ��:>");
			choose = 1;
		}
	}
}

void Modify_List(contact* ps)
{
	printf("������Ҫ���ҵ���ϵ�˵�����");
	char name[20] = {};
	scanf("%s", &name);
}

