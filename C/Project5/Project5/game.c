#define  _CRT_SECURE_NO_WARNINGS 
//游戏代码的实现
//函数声明 符号定义

#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割信息
		//printf("---|---|---\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}

}


void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("玩家下棋:>");

	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		//坐标合法判断
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用,无法下棋,请重新选择\n");
			}
		}
		else
		{
			printf("坐标非法,请重新输入\n");
		}
	}
}


void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋:>");
	printf("\n");
	int x = 0, y = 0;
	while (1)
	{
		x = rand() % row;//0-2
		y = rand() % col;//0-2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}


//如果满了返回1
//没满返回0
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}


//不太智能
char IsWin(char board[ROW][COL], int row, int col)
{
	//行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//列
 	int j = 0;
	for (j = 0; j < row; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1]==board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	} 

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//无赢家,判断是否平局
	if (IsFull(board, row, col))
	{
		return 'Q';
	}

	//游戏继续
	return 'C';
}