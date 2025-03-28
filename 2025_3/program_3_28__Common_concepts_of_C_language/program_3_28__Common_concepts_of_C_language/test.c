#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", a);
//}
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char arr[] = { 'b', 'i', 't' };
//    printf("%d\n", strlen(arr));
//    return 0;
//}
//因为没有确定好\0作为字符串的结束表示 所以strlen(arr)是一个随机数

//%d用于打印整型，%c打印字符，%s打印字符串
//在ASCII码表中，小写字母比大写字母大32！！！

//#include <stdio.h>

//用于打印从32到132的字符
//int main()
//{
//	int i;
//	for (i = 32;i <= 132;i++)
//	{
//		printf("%c", i);
//		if (i % 16 == 15)
//			printf("\n");
//	}
//}

//对于字符串，末尾总是有一个\0作为结束标志，但是在printf的时候，并不会显示到屏幕上。同时在使用函数strlen()的时候，\0也不会被计算在其中

//举例arr1 与arr2

//int main()
//{
//	char arr1[] = {'a','b','c'};
//	char arr2[] = "abc";
//	printf("%d\n", strlen(arr1));//35
//	printf("%d\n", strlen(arr2));//3
//
//
//	return 0;
//}

//若想要arr1与arr2等价，可以在arr1后面加上\0。手动给一个借宿标识符


