//쳲��������е�ʵ�֣��ô�������Ϊ쳲��������еĵ�N����������ľ���ֵ����쳲��������еĵ�5����Ϊ5����10����Ϊ55.

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