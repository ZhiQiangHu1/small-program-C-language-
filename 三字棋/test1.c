//������������Ϸ
#include <stdio.h>
#include"game.h"
void menu()
{
	printf("****************************************\n");
	printf("**** 1.play   0.exit********************\n");
	printf("****************************************\n");
}
//��Ϸ������ʵ��
void game()
{
  //����һ�����飬����߳���������Ϣ
	char board[ROW][COL] = {0};//ȫ��Ϊ�ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);

}
void test()
{
	int input = 0;
	do {
		menu ();
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
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}