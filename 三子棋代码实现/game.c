#include"game.h"

void startboard(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void displayboard(char board[Row][Col], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col;j++)
		{
			printf(" %c ", board[i][j]);
				if (j < col - 1)
					printf("|");
		}
		printf("\n");
		if (i < row - 1)
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		printf("\n");
	}

}
void play(char board[Row][Col],int row,int col )
{
	int m=0, n=0;
	while(1)
	{
		printf("请输入下棋坐标：");
		scanf_s("%d,%d", &m, &n);
		if (m >= 1 && m <= row && n >= 1 && n <= col)
		{
			if (board[m - 1][n - 1] == ' ')
			{
				board[m - 1][n - 1] = '*';
				break;
			}
			else
			{
				printf("改坐标已被占用\n");
			}
		}
		else
		{
			printf("非法坐标，请重新输入\n");
			break;
		}
	}
}

void computer(char board[Row][Col], int row, int col)
{
	int x = 0, y = 0;
	printf("电脑回合:\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int Isfull(char board[Row][Col], int row, int  col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char Iswin(char board[Row][Col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return  board[i][0];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return  board[0][i];
		}
	}
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return  board[0][0];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
	{
		return  board[2][0];
	}
	//判断是否平局
	if (Isfull(board, row, col) == 1)
	{
		return 'Q';
	}
	return 'C';
}