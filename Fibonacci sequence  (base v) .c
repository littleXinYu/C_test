//斐波拉契数列的实现，该代码输入为斐波拉契数列的第N项，会输出该项的具体值，如斐波拉契数列的第5项，输出为5；第10项，输出为55.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 1;
	int b = 1;
	int c = 1;
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	for (i = 3; i <= n; i++)
	{
		if (n == 1 || n == 2)
		{
			break;
		}
		else
		{
			c = b + a;
			a = b;
			b = c;
		}
	}
	printf("%d", c);
	return 0;
}
