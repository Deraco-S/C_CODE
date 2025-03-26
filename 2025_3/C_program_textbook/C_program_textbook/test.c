#include <stdio.h>
//int main()
//{
//	int sum = 0;
//	int n = 1;
//	while (n <= 200)
//	{
//		sum += n;
//		n++;
//	}
//	printf("sum=%d", sum);
//}

//计算100！
//int fun(int n) {
//	if (n == 0)
//		return 1;
//	return n * fun(n - 1);
//}
//
//int main()
//
//{
//	int N;
//	scanf_s("%d", &N);
//	fun(N);
//	printf("N=%d",fun(N));
//}


//long long fun(int n)
//{
//	if (n == 0)
//		return 1;
//	return n * fun(n - 1);
//}
//
//int main()
//{
//	int N;
//	scanf_s("%d", &N);
//	printf("%d", fun(N));
//}

//int main()
//{
//	int i, sum;
//	i = 1;
//	sum = 1;
//	while (i <= 10)//当i <=10时执行语句
//	{
//		sum *= i;
//		i++;
//	}
//	printf("sum=%d", sum);
//}
//int main()
//{
//	int i, sum;
//	i = sum = 0;
//	do {
//		sum += i;
//		i++;
//	} while (i <= 200);
//	printf("sum=%d", sum);
//}

//
//用do -while 语句实现一个正整数的倒序输出
//


//
union student {
    int n;
    char a[100];
};

int main() {
    printf("Size of union: %lu\n", sizeof(union student));
    return 0;
}