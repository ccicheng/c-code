#define Row 3
#define Col 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void startboard(char board[Row][Col], int row, int col);
void displayboard(char board[Row][Col], int row, int col);
void play(char board[Row][Col], int row, int col);
void computer(char board[Row][Col], int row, int col);

char Iswin(char board[Row][Col], int row, int col);