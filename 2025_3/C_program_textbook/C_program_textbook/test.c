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

//����100��
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
//	while (i <= 10)//��i <=10ʱִ�����
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
//��do -while ���ʵ��һ���������ĵ������
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