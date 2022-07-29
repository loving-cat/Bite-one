#define _CRT_SECURE_NO_WARNINGS 1

#include "geme.h"

//��ʼ������
void init_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i <row; i++)
	{
		for ( j = 0; j <col; j++)
		{
			board[i][j] = ' ';	//�������ʼ��Ϊ�ո�ԭ��ʼ��0 ���̲��룻
		}
	}
}
//��ӡ����
//�Ż�ǰ
//void display_board(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for ( i = 0; i < row; i++)
//	{
//		//����
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		// ---|---|---
//			if (i < row - 1)//�ٴ�ӡһ��
//			{
//				printf("---|---|---"); 
//			}
//	}
//}

//�Ż���
void display_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//����
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		int j = 0;
		for ( j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		// ---|---|---
		if (i < row - 1)//�ٴ�ӡһ��
		{
			//printf("---|---|---");
			for ( j = 0; j < col; j++)
			{
				printf("---");
				if (j<col-1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void player_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������壺>\n");
	while (1)
	{
		printf("������Ҫ��������꣺>");
		scanf("%d %d", &x, &y);
		//1.����ĺϷ���
		//2.�����Ƿ�ռ��
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("���겻Ϊ�գ�����������");
			}
		}
		else
		{
			printf("����Ƿ�������������");
		}

	}

}

//�����������
//��AI��
void computer_move(char board[ROW][COL], int row, int col)
{
	printf("��������:>\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
	
}
//����������˷���1
//��������0
static int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for ( i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (' ' == board[i][j])
			{
				return 0;
			}
		}
	}
	return 1;
}
char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for ( i = 0; i < row; i++)//�ж�����Ӯ
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)//�ж�����Ӯ
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	
	//�ж�ƽ��
	if (is_full(board,row,col) == 1)
	{
		return 'Q';
	}

	// ��Ӯ����ƽ�������
	return 'C';
}