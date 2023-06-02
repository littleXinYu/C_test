#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void game()
{
	//生成3X3棋盘
	char board[ROW][COL] ;

	//初始化棋盘
	CleanBoard( board, ROW, COL );

	//打印棋盘
	PrintBoard( board, ROW, COL );

	
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		
		//此处逻辑还需要判断是否获胜————2023.06.02；
		
		//电脑下棋
		AIMove(board, ROW, COL);
		PrintBoard(board, ROW, COL);

		//判断是否获胜
		char whether = GameOver(board, ROW, COL);//这个变量直接搬运上去会出现重复定义参数的现象，所以，定义参数最好放在代码初始位置——2023.06.02；
		if (whether == '*')
		{
			printf("玩家获胜！\n");
			break;
		}
		else if (whether == '#')
		{
			printf("AI获胜！\n");
			break;
		}
		else if (whether == 'D')
		{
			printf("双方平局！\n");
			break;
		}
		else
		{
			continue;//这个continue会终止本次循环，所以直接搬运到上面判断是否获胜，会导致代码出错——2023.06.02；所以需要改成进阶版的，在另外一个代码库里
		}
	}
	printf("本局游戏结束！\n\n\n");
}

void menu()
{
	printf("—————————————\n");
	printf("————1.开始游戏————\n");
	printf("————0.退出游戏————\n");
	printf("—————————————\n");
}

int main()
{
	int input = 1;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		if (input == 1)
		{
			printf("下面我们开始游戏！\n");
			game();
		}
		else if (input == 0)
		{
			printf("已成功退出游戏！\n");
		}
		else
		{
			printf("输入非法数字，请重新选择！\n");
		}
	} while (input);
	

	return 0;
}
