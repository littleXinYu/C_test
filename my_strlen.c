#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int My_Strlen( char arr[])//���� const ��֤���鲻�ı�   ���ص����Ϳ��Ը����� size_t -- unsigned int
{
	//���Լ��뱨���� 
	//assert(arr);
	int i = 0;
	while (arr[i] != '\0')
	{
		i++;
	}
	return i;
}


int main()
{
	char arr1[] = "hello";
	printf("%d", My_Strlen(arr1));//�������������
	return 0;
}

//�٣�����ֱ��д���������ƣ��䱾�ʾ���arr1������Ԫ�ص��׵�ַ����ָ��
//��ôMy_Strlen����������β������������int My_Strlen( char arr[])��Ҳ������ָ��int My_Strlen( char* arr)
//�����е��ң�����ú�����һЩ�����鴫�ε�������⣬�Լ��ݹ���������