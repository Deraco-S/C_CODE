//#include <stdio.h>
//int main()
//{
//	printf("hello word\n");
//	return 0;
//}
//printf 为库函数,专门用来打印数据，要用的时候需要给库打个招呼 即是 #include <stdio.h>
//std 表示标准的意思，io表示输入输出
// VS 运行代码 Ctrl + F5
// main 函数是程序的入口，有且仅有一个


#include <stdio.h>
int main()
{
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(double));
}
