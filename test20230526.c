#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	//������������
	int i = 0;
	int a = 0;
	int ret = 1;
	int sum = 0;

	scanf("%d", &a);//�����������

	//ѭ������׳���� 1! + 2! + 3! ... + n�� 
	for (i = 1; i <= a; i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("%d", sum);
		return 0;
}