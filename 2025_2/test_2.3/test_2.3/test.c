#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main (){
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	int age = 20;
//	float price = 33.33;
//}
//显示出各种数据类型在内存中的大小，单位是字节 一个字节八位 也就是八 比特

// 变量与常量
// 变量分为局部变量与全局变量
//当全局变量与局部变量名字相同的情况下，局部优先

//int global = 20; // global 在{}外，为全局变量，age等在括号内，为局部变量
//int main()
//{
//	short age = 20;// define age = 20
//	int high = 180;// define high = 180
//	float weight = 70;// define weight =70
//
//}

// 写一个代码，计算两个整数的和
//scanf 是一个输入函数
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	int sum = num1 + num2;
	printf("%d\n", sum);
	return 0;
}