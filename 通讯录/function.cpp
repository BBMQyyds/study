#define _CRT_SECURE_NO_WARNINGS 1

#include "address list.h"

void menu()
{
	printf("ͨѶ¼1.10\n�������ڿ�����ͨѶ¼��Ŀǰ�ǲ��԰�\n");
	printf("Ŀǰ�����¹���:\n");
	printf("************************************************\n");
	printf("1.������ϵ��  2.������ϵ��  3.ɾ����ϵ��  4.������ϵ��\n");
	printf("��ѡ��:>");
}

void Creat_New()
{
	contact* ps = (contact*)malloc(sizeof(contact));
	if (ps == NULL)
	{
		perror("psָ������ˣ�����ϵ��");
		return;
	}
	else
	{
		ps->person = (PeopleInform*)malloc(sizeof(PeopleInform));
		if (ps->person == NULL)
		{
			perror("personָ������ˣ�����ϵ��");
		}
		else
		{
			int is_right = 0;
			while (is_right)
			{
				printf("��������ϵ������(����ʮ���ַ�):>");
				scanf("%s", ps->person->name);
				if (strlen(ps->person->name) > 20||strlen(ps->person->name)>11)
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
						is_right = 1;
						printf("�����ɹ�");
						ps->count++;
					}
				}
			}
		}
	}
}