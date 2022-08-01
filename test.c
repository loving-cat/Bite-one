#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("****************************************************\n");
	printf("****           1.play          0.exit           ****\n");
	printf("****************************************************\n");

}
void game()
{
	//��������
	//���2����������Ϣ
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	//mine��ʼ��Ϊȫ'0'
	//show��ʼ��Ϊȫ'*'
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');

	//��ӡ����
	//display_board(mine, ROW, COL);
	//printf("\n");
	display_board(show, ROW, COL);

	//������
	set_mine(mine,ROW,COL);
	//����
	display_board(mine, ROW, COL);
	//����
	find_mine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ���Ƿ�ʼ��Ϸ\n");
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