#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3 //��
#define COL 3 //��

//��ʼ������
void init_board(char board[ROW][COL], int row, int col);

//��ӡ����
void display_board(char board[ROW][COL], int row, int col);

//�������
void player_move(char board[ROW][COL], int row, int col);

//��������
void computer_move(char board[ROW][COL], int row, int col);

//�ж���Ϸ״̬
char is_win(char board[ROW][COL],int row,int col);