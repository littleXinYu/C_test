#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ��

//��ʦ�ģ����ⲻ�ձ�
int drink_coco(int money)
{
	int total = money;
	int empty = money;
	while (empty >= 2)//�õ��ǻ���ѭ��
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	return total;
}


//���װ棬������������Լ�д������о�����Բ�����ʦ�ģ�
int drink_coco_plus(int sum, float sell, float recycle)
{
	float last = sum;//���ϵ���Ǯ
	int coco = 0;//�ȿ�����
	int bottle = 0;//ƿ����
	int total = 0;//����Ŀ�������

	while (last >= sell)
	{
		coco = last / sell;//�����
		last = fmod(last,sell);//ʣ�¶���Ǯ��������ѧ����
		bottle = coco;//�ȿ��֣���ɿ�ƿ
		total += coco;//��¼���˶���ƿ
		coco = 0;//����û��
		last += bottle * recycle;//��ƿ��Ǯ
		bottle = 0;//��ƿû��
	}
	return total;
}

//int drink_coco_plus_plus(int money, float sell, float recycle)
//{
//	int total = money / sell;
//	int empty = money / sell;
//	while (empty >= (sell/recycle))//�õ��ǻ���ѭ��
//	{
//		total += empty / sell;
//		empty = empty * recycle / sell + fmod(empty * recycle, sell);
//	}
//	return total;
//}����������⣬��֪�����ת������������˼���ɡ�

int main()
{
	int money = 0;//������Ǯ
	float Sell = 0;
	float Recycle = 0;

	printf("�����С������Ǯ��\n");
	scanf("%d", &money);
	printf("���ֶ���Ǯһƿ��\n");
	scanf("%f", &Sell);
	printf("��ƿ����Ǯ���գ�\n");
	scanf("%f", &Recycle);

	int drink_cocoo = drink_coco(money);
	printf("�����汾�Ĵ𰸣�%d\n", drink_cocoo);
	int drink_cocoo_plus = drink_coco_plus(money, Sell, Recycle);
	printf("���װ汾�Ĵ𰸣�%d\n", drink_cocoo_plus);
	//int drink_cocoo_plus_plus = drink_coco_plus_plus(money, Sell, Recycle);
	//printf("���װ汾�Ĵ𰸣�%d\n", drink_cocoo_plus_plus);

	return 0; 
}