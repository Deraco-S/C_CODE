#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
//function,也被成为子程序，完成某项特定任务的一小段代码
//举例sqrt() 函数用于求根，在用sqrt()函数之前需要引用
//int main()
//{
//	double r = 16.0;
//	double d = sqrt(r);
//	printf("d=%f", d);
//
//	return 0;
//}

//函数的语法形式：
//ret_type fun_name(参数形式)  ret_type是函数的返回类型，fun_name是函数的名字。
//{
//   ........                 这部分是函数主体
//}
//
// 可以这么去理解：某些参数经过函数的处理，得到我们想要的结果，比如说相加函数，排序函数等等。
// 其中 参数也可以是void，表明函数没有参数
// 
// 
//以下是一个加法函数

//int ADD(int x, int y)
//{
//	return  x + y;
//}
//
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//
//	int a;
//	int b;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	printf("%d",ADD(a, b));
//
//}

//
// 
//形参和实参，在函数的使用过程中，把函数的参数分为实参和形参

//在上述代码中，x，y即是形参，在main函数中的a，b是实参。

//实参和形参之间通过值传递
//
// 值由实参传递给形参，该传递过程是单向的，只能是实参-->形参
//形参和实参是各自独立的内存空间 
//可以理解形参是实参的临时拷贝
//
// 
// 
// 
//数组作为函数的参数

//void arr_set(int arr[],int N)
//{
//	for (int i = 0;i < N;i++)
//	{
//		arr[i] = 0;
//	}
//}
//使用sizeof函数来求数组中的字符个数。
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	arr_set(arr, sizeof(arr)/sizeof(arr[0]));
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));
//	for (int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++)
//	{
//		printf("%d\t", arr[i]);
//	}
//	return 0;
//}