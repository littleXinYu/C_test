#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu()
{
	printf("��������������������������\n");
	printf("��������1.��ʼ��Ϸ��������\n");
	printf("��������0.�˳���Ϸ��������\n");
	printf("��������������������������\n");
}


void game()
{
	//���������
	srand((unsigned int)time(NULL));
	int ret = rand()%100 + 1;

	//������
	int guess = 0;
	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С�ˣ�\n");
		}
		else if(guess > ret)
		{
			printf("�´��ˣ�\n");
		}
		else 
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}

	}

}
int main()
{
	int input = 1;//�Ƿ�ʼ��Ϸ����

	do
	{
		menu();
		printf("��ѡ��1/0����");
		scanf("%d", &input);
		
		switch (input)
		{
		case 1:
			{
				game();
				printf("��ϲ�¶������֣�\n");
				break;
			}
		case 0:
			{
				printf("�ѳɹ��˳���Ϸ��\n");
				break;
			}
		default :
			{
				printf("�������������Ϸ��Χ��\n");
				break;
			}

		}

	} while (input);


	return 0;
}
