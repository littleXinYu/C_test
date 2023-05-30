#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	int i = 0;
	char password[20] = { 0 };//这里不规定数组的大小，后文会报错
	//Run-Time Check Failure #2 - Stack around the variable 'password' was corrupted.

	for (i = 0; i < 3; i++)
	{
		//输入密码
		printf("请输入密码：");
		scanf("%s", password );

		//判断密码是否正确（本来尝试将该块函数化，扔到外面去，但是尝试失败，因为有个break和for需配合用）
		if (strcmp(password, "xinyu123") == 0)//字符串比较strcmp语句
		{
			printf("密码正确！\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入！\n");
		}
	}
	
	if (i == 3)
	{
		printf("输入次数已用完。\n");
	}

	return 0;
}