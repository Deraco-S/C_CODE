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
//��ʾ�����������������ڴ��еĴ�С����λ���ֽ� һ���ֽڰ�λ Ҳ���ǰ� ����

// �����볣��
// ������Ϊ�ֲ�������ȫ�ֱ���
//��ȫ�ֱ�����ֲ�����������ͬ������£��ֲ�����

//int global = 20; // global ��{}�⣬Ϊȫ�ֱ�����age���������ڣ�Ϊ�ֲ�����
//int main()
//{
//	short age = 20;// define age = 20
//	int high = 180;// define high = 180
//	float weight = 70;// define weight =70
//
//}

// дһ�����룬�������������ĺ�
//scanf ��һ�����뺯��
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	int sum = num1 + num2;
	printf("%d\n", sum);
	return 0;
}