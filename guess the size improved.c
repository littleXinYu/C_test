#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu()
{
	printf("—————————————\n");
	printf("————1.开始游戏————\n");
	printf("————0.退出游戏————\n");
	printf("—————————————\n");
}


void game()
{
	//生成随机数
	srand((unsigned int)time(NULL));
	int ret = rand()%100 + 1;

	//猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了！\n");
		}
		else if(guess > ret)
		{
			printf("猜大了！\n");
		}
		else 
		{
			printf("恭喜你，猜对了！\n");
			break;
		}

	}

}
int main()
{
	int input = 1;//是否开始游戏输入

	do
	{
		menu();
		printf("请选择（1/0）：");
		scanf("%d", &input);
		
		switch (input)
		{
		case 1:
			{
				game();
				printf("恭喜猜对了数字！\n");
				break;
			}
		case 0:
			{
				printf("已成功退出游戏！\n");
				break;
			}
		default :
			{
				printf("输入操作超出游戏范围！\n");
				break;
			}

		}

	} while (input);


	return 0;
}
