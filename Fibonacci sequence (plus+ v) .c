//쳲��������е�ʵ�֣��ô�������Ϊ쳲��������еĵ�N����������ľ���ֵ.
//��쳲��������еĵ�5����Ϊ5����10����Ϊ55.
//�öγ���Ӧ�õݹ�˼�����.

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

	printf("������쳲��������е�n�");
	scanf("%d", &n);
	fib = fibonacci( n );
	printf("%d", fib);

	return 0;
}