#define _CRT_SECURE_NO_WARNINGS 1

#include "geme.h"

//初始化棋盘
void init_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i <row; i++)
	{
		for ( j = 0; j <col; j++)
		{
			board[i][j] = ' ';	//将数组初始化为空格，原初始化0 棋盘不齐；
		}
	}
}
//打印棋盘
//优化前
//void display_board(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for ( i = 0; i < row; i++)
//	{
//		//数据
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		// ---|---|---
//			if (i < row - 1)//少打印一行
//			{
//				printf("---|---|---"); 
//			}
//	}
//}

//优化后
void display_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//数据
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
		if (i < row - 1)//少打印一行
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
	printf("玩家下棋：>\n");
	while (1)
	{
		printf("请输入要下棋的坐标：>");
		scanf("%d %d", &x, &y);
		//1.坐标的合法性
		//2.坐标是否被占用
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标不为空，请重新输入");
			}
		}
		else
		{
			printf("坐标非法，请重新输入");
		}

	}

}

//电脑随机下棋
//非AI版
void computer_move(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋:>\n");
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
//如果棋盘满了返回1
//不满返回0
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
	for ( i = 0; i < row; i++)//判断三行赢
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)//判断三列赢
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
	
	//判断平局
	if (is_full(board,row,col) == 1)
	{
		return 'Q';
	}

	// 无赢，无平，则继续
	return 'C';
}