//测试三字棋游戏
#include <stdio.h>
#include"game.h"
void menu()
{
	printf("****************************************\n");
	printf("**** 1.play   0.exit********************\n");
	printf("****************************************\n");
}
//游戏的整个实现
void game()
{
  //创建一个数组，存放走出的棋盘信息
	char board[ROW][COL] = {0};//全部为空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	// 下棋
	while(1)
	{
	//玩家先下棋
		playermove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		//判断玩家是否赢
		IsWin();
		//电脑下棋
		ComputerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		//判断电脑是否赢
		IsWin();
		
	}

}
void test()
{
	int input = 0;
	srand((unsigned int)time (NULL));
	do {
		menu ();
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
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
