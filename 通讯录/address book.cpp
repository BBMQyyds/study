#define _CRT_SECURE_NO_WARNINGS 1

#include"address list.h"

int main()
{
	contact Con_Peo;
	Init(&Con_Peo);
	int choose = 1;
	menu();
	while(choose)
	{
		printf("1.������ϵ��  2.չʾ�б�  3.������ϵ��  4.ɾ����ϵ��  5.������ϵ��\n");
		printf("��ѡ��:>");
		scanf("%d", &choose);
		switch (choose)
		{
		case creat:
			Creat_New(&Con_Peo);
			break;
		case show:
			Show(&Con_Peo);
			break;
		case search:
			Search(&Con_Peo);
			break;
		case modify:
			break;
		case sort:
			break;
		case special:
			break;
		default:
			printf("ѡ���������ѡ��");
			system("cls");
			break;
		}
	}
	
}