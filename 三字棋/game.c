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
void playermove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
printf("玩家走：>\n");
	printf("请输入要下的坐标:>");
	scanf("%d%d",&x,&y);
	//判断x，y坐标的合理性
	if(x>=1 && x<=row && y>=1 && y<=col)
	{
		if(board[x-1][y-1]==' ')
		{
		board[x-1][y-1]='*';
			break;
		}
		else{
		printf("该坐标被占用\n");
		}
	}
	else
	{
	printf("坐标非法，请重新输入！\n");
	}
		
		
}
