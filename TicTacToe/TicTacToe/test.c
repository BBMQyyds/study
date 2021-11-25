#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("**** 1.play    0.exit ****\n");
	printf("**************************\n");
}

void game_PC()
{
	char board[ROW][COL] = { 'a' };
	int ret = 0;
	Initboard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == 'X')
	{
		printf("��Ϸ���������ʤ\n");
	}
	if (ret == 'O')
	{
		printf("��Ϸ����������ʤ\n");
	}
	if (ret == 'Q')
	{
		printf("��Ϸ����������\n");
	}
}

void game_PP()
{
	char board[ROW][COL] = { 'a' };
	int ret = 0;
	Initboard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	while (1)
	{
		Player1Move(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Player2Move(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == 'X')
	{
		printf("��Ϸ������1Pʤ\n");
	}
	if (ret == 'O')
	{
		printf("��Ϸ������2Pʤ\n");
	}
	if (ret == 'Q')
	{
		printf("��Ϸ����������\n");
	}
}

void test()
{
	int input = 0;
	int choose = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		again:
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("1.�˻�(ɵ��ʽ)  2.����  ��ѡ��:>");
			scanf("%d", &choose);
			switch (choose)
			{
			case 1:
				game_PC();
				break;
			case 2:
				game_PP();
				break;
			}
			break;
		case 0:
			printf("�˳�����\n");
			Sleep(2000);
			break;
		default:
			printf("�����������������\n");
			goto again;
		}
	} while (input);
}

int main()
{
	test();
}