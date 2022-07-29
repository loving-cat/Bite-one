#define _CRT_SECURE_NO_WARNINGS 
//三子棋		测试区
#include "geme.h"
void menu()
{
	printf("*********************************\n");
	printf("*** 1.play             0.exit ***\n");
	printf("*********************************\n");

}

void game()
{
	//数据储存需要3*3的二维数组
	char board[ROW][COL] = { 0 };
	char ret = 0;
	init_board(board, ROW, COL);
	display_board(board,ROW,COL);
	//玩家下棋
	while (1)
	{
		player_move(board, ROW, COL);
		display_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
			break;
		computer_move(board, ROW, COL);
		display_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret = 'Q')
	{
		printf("平局\n");
	}
	display_board(board, ROW, COL);

}
//玩家赢
//电脑赢
//平局了
//游戏继续
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}