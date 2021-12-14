#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i=0; i < rows; i++)
	{
		for (j=0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}

}

void PutMine(char mine[ROWS][COLS], int rows, int cols)
{
	int count = 0;
	int x = 0;
	int y = 0;
	while(count<Easy_Count)
	{
		x = rand() % ROW + 1;
		y = rand() % COL + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count++;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
	printf("\n");
	}
}

//������Χ�׵ĸ���
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return  mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x+1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

//�ݹ�հ�չ��
void blank(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int count = get_mine_count(mine, x, y);
	if (count == 0)
	{
		show[x][y] = ' ';
		if (x - 1 >= 1 && x <= ROW && y >= 1 && y <= COL && show[x - 1][y] == '*')
			blank(mine, show, x - 1, y);
		if (x >= 1 && x <= ROW && y - 1 >= 1 && y <= COL && show[x][y - 1] == '*')
			blank(mine, show, x, y - 1);
		if (x + 1 >= 1 && x <= ROW && y >= 1 && y <= COL && show[x + 1][y] == '*')
			blank(mine, show, x + 1, y);
		if (x >= 1 && x <= ROW && y + 1 >= 1 && y <= COL && show[x][y + 1] == '*')
			blank(mine, show, x, y + 1);
	}
	else
		show[x][y] = count + '0';
}

//�ж�δ�������
int Is_Win(char show[ROWS][COLS],int row,int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
				count++;
		}
	}
	return count;
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS],int row, int col)
{
	int x = 0;
	int y = 0;
	int count = Is_Win;
	while (count!=Easy_Count)
	{
		printf("�������Ų�λ��:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����,��λ�����£�1Ϊ�ף�\n");
				system("pause");
				DisplayBoard(mine, ROW, COL);
				system("pause");
				break;
			}
			else if (show[x][y] != '*')
				printf("��λ���Ѳ飬����������!");
			else
			{
				blank(mine, show, x, y);
				printf("\n");
				DisplayBoard(show, ROW, COL);
			}
		}
		else
		{
			printf("��λ�ò���ȷ������������!");
		}
	}
	if (count==Easy_Count)
	{
		printf("��ϲ�㣬���׳ɹ�");
	}
}