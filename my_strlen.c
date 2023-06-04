#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int My_Strlen( char arr[])//少了 const 保证数组不改变   返回的类型可以更换成 size_t -- unsigned int
{
	//可以加入报错功能 
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
	printf("%d", My_Strlen(arr1));//函数传参问题①
	return 0;
}

//①：这里直接写入数组名称，其本质就是arr1数组首元素的首地址；即指针
//那么My_Strlen这个函数的形参则可以是数组int My_Strlen( char arr[])，也可以是指针int My_Strlen( char* arr)
//还是有点乱，明天好好梳理一些，数组传参的相关问题，以及递归的相关问题