#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
	//��ӡ��Ϸ����
	printf("��������������������������\n");
	printf("��������1.��ʼ��Ϸ��������\n");
	printf("��������0.�˳���Ϸ��������\n");
	printf("��������������������������\n");
	
	//������Ϸ����Ҫ�Ĳ�������
	int a = 0;
	int b = 0;
	int n = 0;//random 

	printf("�����Ƿ�ʼ��Ϸ����1/0��\n");
	scanf("%d", &a);
	srand((unsigned)time(NULL));
	n = rand()%100 + 1;

	if (a == 1)
	{
		//play the game 
		printf("������һ���Ժ��е���ֵ��100���ڣ���");
		scanf("%d", &b);
		
		while (a == 1)
		{
			if (b > n)
			{
				printf("������е��Ŷ��\n���ٴ�����һ��ֵ��");
				scanf("%d", &b);
			}
			else if (b < n)
			{
				printf("������е�СŶ��\n���ٴ�����һ��ֵ��");
				scanf("%d", &b);
			}
			else
			{
				printf("�����������������һ��\n");
				break;
			}
		}
		

	}
	else if (a == 0)
	{
		printf("�ѳɹ��˳���Ϸ��\n");
	}

	else
	{
		printf("���������Ѿ���������֮�⣡\n����������Ϸ������������\n");
	}
	return 0;
}
