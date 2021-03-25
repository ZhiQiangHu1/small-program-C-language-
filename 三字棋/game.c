#include"game.h"

void InitBoard(int board[ROW][COL], int row, int col)
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
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印一行的数据
		int j=0;
		for(j=0;j<col;j++)
		{
		printf(" %c ",board[i][j]);
			if(j<col-1)
			printf("|");
			
		}
		printf("\n");
			//打印分割行
		if (i<row-1)
		{
		for (j=0;j<col;j++)
		{
		printf("---");
			if(j<col-1)
			printf("|");
		}
			printf("\n");
		}
	}
}
