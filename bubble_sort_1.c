//���������Լ���ð���������ָ��ĺ��壬����ָ�룬�ͽṹ��
#define  _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include <stdlib.h>
////��һ������ð������
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int j = 0;
//	int mid = 0;
//
//	for (i = 0; i < 10 - 1; i++)
//	{
//		for (j = 0; j < 10 - i - 1; j++)
//		{
//			if (arr[j + 1] > arr[j])
//			{
//				mid = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = mid;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


////��һ��������ð������
//void bubble_sort( int arr[] , int sz )
//{
//	int i = 0;
//	int j = 0;
//	int mid = 0;
//	
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz- i - 1; j++)
//		{
//			if (arr[j + 1] > arr[j])
//			{
//				mid = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = mid;
//			}
//		}
//	}
//}
//
//void print_arr(int arr[] , int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//}
//
//int main()
//{
//	int sz = 0;
//	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr , sz );
//	print_arr(arr, sz);
//	return 0;
//}
