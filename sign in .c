#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	int i = 0;
	char password[20] = { 0 };//���ﲻ�涨����Ĵ�С�����Ļᱨ��
	//Run-Time Check Failure #2 - Stack around the variable 'password' was corrupted.

	for (i = 0; i < 3; i++)
	{
		//��������
		printf("���������룺");
		scanf("%s", password );

		//�ж������Ƿ���ȷ���������Խ��ÿ麯�������ӵ�����ȥ�����ǳ���ʧ�ܣ���Ϊ�и�break��for������ã�
		if (strcmp(password, "xinyu123") == 0)//�ַ����Ƚ�strcmp���
		{
			printf("������ȷ��\n");
			break;
		}
		else
		{
			printf("����������������룡\n");
		}
	}
	
	if (i == 3)
	{
		printf("������������ꡣ\n");
	}

	return 0;
}