#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水。

//老师的，问题不普遍
int drink_coco(int money)
{
	int total = money;
	int empty = money;
	while (empty >= 2)//用的是回收循环
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	return total;
}


//进阶版，问题参数化（自己写的问题感觉简洁性不如老师的）
int drink_coco_plus(int sum, float sell, float recycle)
{
	float last = sum;//手上的余钱
	int coco = 0;//喝可乐数
	int bottle = 0;//瓶子数
	int total = 0;//喝完的可乐总数

	while (last >= sell)
	{
		coco = last / sell;//买可乐
		last = fmod(last,sell);//剩下多少钱，调用数学函数
		bottle = coco;//喝可乐，变成空瓶
		total += coco;//记录喝了多少瓶
		coco = 0;//可乐没了
		last += bottle * recycle;//空瓶换钱
		bottle = 0;//空瓶没了
	}
	return total;
}

//int drink_coco_plus_plus(int money, float sell, float recycle)
//{
//	int total = money / sell;
//	int empty = money / sell;
//	while (empty >= (sell/recycle))//用的是回收循环
//	{
//		total += empty / sell;
//		empty = empty * recycle / sell + fmod(empty * recycle, sell);
//	}
//	return total;
//}代码存在问题，不知道如何转换，明天再来思考吧。

int main()
{
	int money = 0;//给的总钱
	float Sell = 0;
	float Recycle = 0;

	printf("妈妈给小明多少钱？\n");
	scanf("%d", &money);
	printf("可乐多少钱一瓶？\n");
	scanf("%f", &Sell);
	printf("空瓶多少钱回收？\n");
	scanf("%f", &Recycle);

	int drink_cocoo = drink_coco(money);
	printf("初级版本的答案：%d\n", drink_cocoo);
	int drink_cocoo_plus = drink_coco_plus(money, Sell, Recycle);
	printf("进阶版本的答案：%d\n", drink_cocoo_plus);
	//int drink_cocoo_plus_plus = drink_coco_plus_plus(money, Sell, Recycle);
	//printf("进阶版本的答案：%d\n", drink_cocoo_plus_plus);

	return 0; 
}