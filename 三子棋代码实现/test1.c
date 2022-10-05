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
	//������������
	char board[Row][Col] = { 0 };
	//��ʼ������
	startboard(board, Row, Col);
	//��ӡ����
	displayboard(board, Row, Col);
	//�������꣨x��y����ʼ��Ϸ
	while (1)
	{
		play(board, Row, Col);
		displayboard(board, Row, Col);
		//�ж���Ӯ
		ret = Iswin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}
		computer(board, Row, Col);
		displayboard(board, Row, Col);
		//�ж���Ӯ
		ret =Iswin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��ϲ�㣬��Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("���ź���������\n");
	}
	else
	{
		printf("�ٽ�������ƽ����\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while(input);
}

int main()
{
	test();
	return 0;
}