//斐波拉契数列的实现，该代码输入为斐波拉契数列的第N项，会输出该项的具体值.
//如斐波拉契数列的第5项，输出为5；第10项，输出为55.
//该段程序将应用外接函数程序思想进行.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	int i = 0;
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
	return c;

}


int main()
{
	int n = 0;
	int fib = 0;
	scanf("%d", &n);
	fib = fibonacci(n);
	printf("%d", fib);
	return 0;
}
