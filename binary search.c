#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
	//�������
	int rig = 0;
	int lef = 0;
	int mid = 0;
	int  n  = 0;

	//������Ҫ���ҵ�����
	printf("����������Ҫ��ѯ��������");
	scanf("%d", &n);


	//ϵͳ�����б�
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	//����б�ĳ���
	int sz = sizeof(arr) / sizeof(arr[0]);

	//��ֵ��˵���Ҷ˵�
	lef = 0;
	rig = sz-1;
	

	//�ƶ��˵����ֵ
	while (lef <= rig)
	{
		//�����м�ֵ
		mid = (rig + lef) / 2;
		
		//�м�ֵ��Ŀ��ֵ�Ƚϴ�С
		if (arr[mid] > n)//˵��Ŀ�����м�ָ������
		{
			rig = mid - 1;//��������Χ��С��lef��mid-1����Ϊmid�Ѿ���������
		}//������rig = mid�������rig��lef��������������ѭ������

		else if (arr[mid] < n)//˵��Ŀ�����м�ָ����ұ�
		{
			lef = mid + 1;//��������Χ��С��mid+1��rig����Ϊmid�Ѿ���������
		}//������rig = mid�������rig��lef��������������ѭ������

		else
		{
			printf("�ҵ���Ŀ��λ��%d", mid );
			break;
		}
	}
	if (lef > rig)//�þ䲻�ܷ���ѭ���ڲ�
	{
		printf("Ŀ�겻������������");
	}
	return 0;
}