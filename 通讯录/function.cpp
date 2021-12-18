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
	ps->person += ps->count;//����personָ��λ�õ������ݴ�(������check֮��)
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
				ps->person++;
				ps->count++;
			}
		}
	}
	ps->person -= ps->count;//����personָ�뵽��ʼ��
	system("cls");
}

void Show(contact* ps)
{
	int i = ps->count;
	printf("����              �绰����\n");
	while (i)
	{
		printf("%s(%s)%16s\n", ps->person->name, ps->person->sex, ps->person->tel);
		i--;
		ps->person++;
	}
	system("pause");
	system("cls");
	ps->person -= ps->count;//��psָ���personָ��ع鵽���λ��
}

void Search(contact* ps)
{
	printf("ѡ����ҷ�ʽ��1.�������� 2.���ϲ���:>");
	int choose = 1;
	int whether = 0;//�����ж��Ƿ����ҵ���ϵ��
	while (choose)
	{
		scanf("%d", &choose);
		if (choose == 1)
		{
			printf("������Ҫ���ҵ���ϵ�˵�����:>");
			char name[nameM] = "";
			scanf("%s", &name);
			int i = ps->count;
			while (i)
			{
				if (0 == (strcmp(name, ps->person->name)))
				{
					whether++;
					if (whether == 1)//Ϊ��ֻ��ӡһ��
					{
						printf("��ϵ����Ϣ����\n");
						printf("����              �绰����\n");
					}
					printf("%s(%s)%16s\n", ps->person->name, ps->person->sex, ps->person->tel);
					
				}
				ps->person++;
				i--;
			}
			if (whether == 0)
				printf("����ϵ�˲�����\n");
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
			while (i)
			{
				
				if (0 == strncmp(name, ps->person->name, strlen(name)))
				{
					whether++;
					if (whether == 1)//ֻ��ӡһ�Σ����ظ�
					{
						printf("��ϵ����Ϣ����\n");
						printf("����              �绰����\n");
					}
					printf("%s(%s)%16s\n", ps->person->name, ps->person->sex, ps->person->tel);
				}
				ps->person++;
				i--;
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
	ps->person -= ps->count;//��psָ���personָ��ع鵽���λ��
}

void Modify_List(contact* ps)
{
	printf("������Ҫ�޸ĵ���ϵ���ջ�����\n");
	//����ϵ���б��п�ʼ���ң���������ͬ��search,����û��ֱ�ӵ���
	char name[nameM] = "";
	char tel[telM] = "";
	char sex[sexM] = "";
	scanf("%s %s %s", &name,&tel,&sex);

	int i = ps->count;//�����޸�countֵ

	int whether = 0;//�����ж��ܷ��ҵ������ƴ�ӡ

	//��¼��������������������ϵ�˵�ַ���Ž�������
	PeopleInform** p = (PeopleInform**)malloc(sizeof(PeopleInform));
	if (p != NULL)
	{
		//��ӡȫ��������������ϵ�ˣ�ɾ���ظ��������������о������ڴ���ʱ��ֹ�����ǿ�д���ˣ������ˣ�
		while (i)
		{
			//if�������ж������Ա�绰�Ƿ����
			if (0 == strncmp(name, ps->person->name,strlen(name)))
			{
				whether++;
				if (whether == 1)
				{
					printf("�ҵ�������ϵ��");
					printf("  ����              �绰����\n");
				}
				printf("%d %s(%s)%16s\n", whether,ps->person->name, ps->person->sex, ps->person->tel);
				PeopleInform** ptr = (PeopleInform**)realloc(p, whether * sizeof(PeopleInform));
				if (ptr != NULL)
				{
					p = ptr;
					p[whether - 1] = ps->person;//��¼�ҵ�����ϵ��������Ϣ�ĵ�ַ����̫���ˣ�
				}
			}
			ps->person++;//psָ��ָ�����λ��
			i--;
		}
	}
	if (whether >= 1)
	{
		int a = 0;
		printf("��ѡ��Ҫ�޸ĵ���ϵ�ˣ�����ǰ������֣�:>");
		scanf("%d", &a);
		printf("������ϵ��:>\n");
		printf("%s(%s)%16s\n", p[a-1]->name, p[a-1]->sex, p[a-1]->tel);
		int mod = 4;
		printf("������Ҫ�޸ĵ�����\n");
		printf("1.���� 2.�绰 3.�Ա� 4.ɾ��(��ûʵ��) 0.�˳�");
		while (mod)
		{
			printf("��ѡ��:>");
			scanf("%d", &mod);
			if (mod == 1)
			{
				char name[nameM] = "";
				scanf("%s", p[a-1]->name);
				printf("�޸ĳɹ�");
			}
			else if (mod == 2)
			{
				char tel[telM] = "";
				scanf("%s", p[a - 1]->tel);
				printf("�޸ĳɹ�");
			}
			else if (mod == 3)
			{
				char sex[sexM] = "";
				scanf("%s", p[a - 1]->sex);
				printf("�޸ĳɹ�");
			}
			else if (mod == 4)
			{
				printf("���պ�ʵ�ְ�");
				system("pause");
			}
		}
	}
	if (whether == 0)
	{
		printf("��ϵ�˲�����");
	}
	ps->person -= ps->count;//ָ��ع��ʼλ��
}

int Cmp(const void* p1,const void* p2)
{
	return strcmp(((PeopleInform*)p1)->name, ((PeopleInform*)p2)->name);
}

void Sort_List(contact* ps)
{
	qsort(ps->person, ps->count, sizeof(PeopleInform), Cmp);
	printf("����ɹ�");
}