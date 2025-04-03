#define _CRT_SECURE_NO_WARNINGS
#include "add.h" 
//函数 用数组来做函数的参数
# include <stdio.h>
//void set_arr(int arr[],int n)//这里[],说明arr是一个数组，我们需要的参数是一个数组类型
//{
//	for (int i = 0;i < n;i++)
//		arr[i] = 0;
//}
//
//void print_arr(int arr[],int n)
//{
//	for (int i = 0;i < n;i++)
//		printf("%d\t", arr[i]);
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	set_arr(arr, n);
//	print_arr(arr, n);
//}

//链式访问：就是将一个函数的返回值作为另外一个函数的参数。
//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
//}
//最里层的printf函数的返回值是打印的字符数，也就是说，最里层的返回值是2，先把43打印出来，把2返沪给中间一层，然后中间一层打印432，把1返回给最外面一层，得到的结果就是4321

//如果函数在main()函数下面定义，main函数在使用时需要对函数进行声明。
// eg:
//
// void set_arr(int arr[],int n);
// 
// 
// 函数定义：
// void set_arr(int arr[],int n)
//{
//	......
//	return 0;
// 
// }
// 
//如果先要调用test.c中的函数，只需要加上声明即可,见第二行

//int main()
//{
//	float a = 10;
//	float b = 19;
//	float c = ADD(a,b);
//	printf("%f", c);
//  
//  return 0;
//}

//认识static
// 1.被static修饰的变量存放在静态区，会一直保留该变量的值。
// 2.没有被static修饰的局部变量存放在栈区，只有在使用的时候才会临时分配内存，用完之后，系统会回收掉该空间。
// 3.没有被static修饰的局部变量，默认是auto。
// 4.malloc，free等函数，能够实现动态内存管理的，其位于堆区。
// 5.一共有三个区，分别是栈区（用于存放局部变量，函数参数），堆区（malloc，free等函数），静态区（全局变量，静态变量，就是static修饰的变量）。
// 6.如果static来修饰函数，那么这个函数只能在该源文件使用，其他源文件就算加了 extern关键字也无法使用。如果不用static来修饰，那么其他源文件可以通过extern关键字来引用。
// 7.static修饰变量，外部文件若想引用，与6同理。 
//体会一下static



//没有用static修饰
//void test()
//{
//	int i = 0;      调用完之后i的值不会被保留，继续赋值为0；++之后值为1
//	i++;
//	printf("%d", i);
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0;i <= 5;i++)
//		test();
//	return 0;
//}

//static 修饰的i；其值会被一直保留
//void test()
//{
//	static int i = 0; 
//	i++;
//	printf("%d\t", i);
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0;i <= 5;i++)
//		test();
//	return 0;
//}


