#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
	//打印游戏界面（与improved的进行比较，该段可以转换成一个菜单函数放在主程序的外部进行调用——20230529）
	printf("—————————————\n");
	printf("————1.开始游戏————\n");
	printf("————0.退出游戏————\n");
	printf("—————————————\n");
	
	//引入游戏所需要的参数变量
	int a = 0;      //开始游戏的键入变量
	int b = 0;      //游戏开始后玩家键入的变量
	int n = 0;      //自动产生的随机数

	printf("请问是否开始游戏？（1/0）\n");
	scanf("%d", &a);      //启动游戏选项
	
	//产生随机数
	srand((unsigned)time(NULL));
	n = rand()%100 + 1;      //一局游戏内置的结果

	if (a == 1)
	{
		//play the game （与improved的进行比较，该段可以换成一个游戏函数放在主程序的外部进行调用——20230529）
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
