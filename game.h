#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10
//≥ı ºªØ∆Â≈Ã
void init_board(char board[ROWS][COLS], int rows, int cols, char set);

//¥Ú”°∆Â≈Ã
void display_board(char board[ROWS][COLS], int row, int col);

//≤º÷√¿◊
void set_mine(char board[ROWS][COLS], int row, int col);

//≈≈¿◊
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);