#define _CRT_SECURE_NO_WARNINGS 
//������		������
#include "geme.h"
void menu()
{
	printf("*********************************\n");
	printf("*** 1.play             0.exit ***\n");
	printf("*********************************\n");

}

void game()
{
	//���ݴ�����Ҫ3*3�Ķ�ά����
	char board[ROW][COL] = { 0 };
	char ret = 0;
	init_board(board, ROW, COL);
	display_board(board,ROW,COL);
	//�������
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
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret = 'Q')
	{
		printf("ƽ��\n");
	}
	display_board(board, ROW, COL);

}
//���Ӯ
//����Ӯ
//ƽ����
//��Ϸ����
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
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}