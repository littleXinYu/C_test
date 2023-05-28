#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	//输入变量
	int rig = 0;
	int lef = 0;
	int mid = 0;
	int  n  = 0;

	//输入需要查找的整数
	printf("请输入你想要查询的整数：");
	scanf("%d", &n);


	//系统定义列表
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	//求出列表的长度
	int sz = sizeof(arr) / sizeof(arr[0]);

	//赋值左端点和右端点
	lef = 0;
	rig = sz-1;
	

	//移动端点查找值
	while (lef <= rig)
	{
		//计算中间值
		mid = (rig + lef) / 2;
		
		//中间值与目标值比较大小
		if (arr[mid] > n)//说明目标在中间指针的左边
		{
			rig = mid - 1;//把搜索范围缩小成lef到mid-1，因为mid已经搜索过了
		}//若换成rig = mid；会出现rig和lef是相邻整数，死循环现象

		else if (arr[mid] < n)//说明目标在中间指针的右边
		{
			lef = mid + 1;//把搜索范围缩小成mid+1到rig，因为mid已经搜索过了
		}//若换成rig = mid；会出现rig和lef是相邻整数，死循环现象

		else
		{
			printf("找到了目标位序%d", mid );
			break;
		}
	}
	if (lef > rig)//该句不能放在循环内部
	{
		printf("目标不存在于序列中");
	}
	return 0;
}