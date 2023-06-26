//创造属于自己的冒泡排序，理解指针的含义，运用指针，和结构体
#define  _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include <stdlib.h>
////单一的整型冒泡排序
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


////单一引用整型冒泡排序
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

//多种类型使用的冒泡排序

void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		*buf1++;
		*buf2++;
	}
}
void bubble_sort(void* base,
				int sz,
				int width,
				int (*cmp)(const void*e1, const void*e2)
				)
{
	int i = 0;
	int j = 0;
		
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz- i - 1; j++)
		{
			if (cmp( (char*)base + j*width, (char*)base + (j+1)*width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

int cmp_int(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}

int cmp_double(const void* p1, const void* p2)
{
	return (*(double*)p1 - *(double*)p2);
}

int main()
{
	int sz = 0;
	int width = 0;
	double arr[9] = { 1.0, 3.2, 5.4, 7.8, 2.1, 4.6, 6.7, 8.9 };//①只需要改要排序的类型
	sz = sizeof(arr) / sizeof(arr[0]);
	width = sizeof(arr[0]);
	bubble_sort(arr, sz, width, cmp_double);//②只需要改最后一个
	//print_sort(arr);//打印不同类型数组这一块还是需要学习
	return 0;
}