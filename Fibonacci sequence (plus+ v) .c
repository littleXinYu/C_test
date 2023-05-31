//斐波拉契数列的实现，该代码输入为斐波拉契数列的第N项，会输出该项的具体值.
//如斐波拉契数列的第5项，输出为5；第10项，输出为55.
//该段程序将应用递归思想进行.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci( int n )
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fibonacci(n-1) + fibonacci(n - 2);
}


int main()
{
	int n = 0;
	int fib = 0;

	printf("请输入斐波拉契数列第n项：");
	scanf("%d", &n);
	fib = fibonacci( n );
	printf("%d", fib);

	return 0;
}