#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
//function,Ҳ����Ϊ�ӳ������ĳ���ض������һС�δ���
//����sqrt() �����������������sqrt()����֮ǰ��Ҫ����
//int main()
//{
//	double r = 16.0;
//	double d = sqrt(r);
//	printf("d=%f", d);
//
//	return 0;
//}

//�������﷨��ʽ��
//ret_type fun_name(������ʽ)  ret_type�Ǻ����ķ������ͣ�fun_name�Ǻ��������֡�
//{
//   ........                 �ⲿ���Ǻ�������
//}
//
// ������ôȥ��⣺ĳЩ�������������Ĵ����õ�������Ҫ�Ľ��������˵��Ӻ������������ȵȡ�
// ���� ����Ҳ������void����������û�в���
// 
// 
//������һ���ӷ�����

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
//�βκ�ʵ�Σ��ں�����ʹ�ù����У��Ѻ����Ĳ�����Ϊʵ�κ��β�

//�����������У�x��y�����βΣ���main�����е�a��b��ʵ�Ρ�

//ʵ�κ��β�֮��ͨ��ֵ����
//
// ֵ��ʵ�δ��ݸ��βΣ��ô��ݹ����ǵ���ģ�ֻ����ʵ��-->�β�
//�βκ�ʵ���Ǹ��Զ������ڴ�ռ� 
//��������β���ʵ�ε���ʱ����
//
// 
// 
// 
//������Ϊ�����Ĳ���

//void arr_set(int arr[],int N)
//{
//	for (int i = 0;i < N;i++)
//	{
//		arr[i] = 0;
//	}
//}
//ʹ��sizeof�������������е��ַ�������
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