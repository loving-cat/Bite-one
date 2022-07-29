#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3 //行
#define COL 3 //列

//初始化棋盘
void init_board(char board[ROW][COL], int row, int col);

//打印棋盘
void display_board(char board[ROW][COL], int row, int col);

//玩家下棋
void player_move(char board[ROW][COL], int row, int col);

//电脑下棋
void computer_move(char board[ROW][COL], int row, int col);

//判断游戏状态
char is_win(char board[ROW][COL],int row,int col);