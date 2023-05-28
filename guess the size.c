#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
	//打印游戏界面
	printf("—————————————\n");
	printf("————1.开始游戏————\n");
	printf("————0.退出游戏————\n");
	printf("—————————————\n");
	
	//引入游戏所需要的参数变量
	int a = 0;
	int b = 0;
	int n = 0;//random 

	printf("请问是否开始游戏？（1/0）\n");
	scanf("%d", &a);
	srand((unsigned)time(NULL));
	n = rand()%100 + 1;

	if (a == 1)
	{
		//play the game 
		printf("请输入一个脑海中的数值（100以内）：");
		scanf("%d", &b);
		
		while (a == 1)
		{
			if (b > n)
			{
				printf("这个数有点大哦！\n请再次输入一个值：");
				scanf("%d", &b);
			}
			else if (b < n)
			{
				printf("这个数有点小哦！\n请再次输入一个值：");
				scanf("%d", &b);
			}
			else
			{
				printf("哈哈哈！我们意念和一！\n");
				break;
			}
		}
		

	}
	else if (a == 0)
	{
		printf("已成功退出游戏！\n");
	}

	else
	{
		printf("你所做的已经超出规则之外！\n————游戏崩溃————\n");
	}
	return 0;
}
