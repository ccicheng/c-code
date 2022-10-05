#include"game.h"
void menu()
{
	printf("***********************\n");
	printf("*****1.play  0.exit*****\n");
	printf("***********************\n");
}
void game()
{
	char ret = 0;
	//定义棋盘数组
	char board[Row][Col] = { 0 };
	//初始化棋盘
	startboard(board, Row, Col);
	//打印棋盘
	displayboard(board, Row, Col);
	//输入坐标（x，y）开始游戏
	while (1)
	{
		play(board, Row, Col);
		displayboard(board, Row, Col);
		//判断输赢
		ret = Iswin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}
		computer(board, Row, Col);
		displayboard(board, Row, Col);
		//判断输赢
		ret =Iswin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("恭喜你，你赢了\n");
	}
	else if (ret == '#')
	{
		printf("很遗憾，你输了\n");
	}
	else
	{
		printf("再接再厉，平局了\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重选！\n");
			break;
		}
	} while(input);
}

int main()
{
	test();
	return 0;
}