//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//#define _CRT_SECURE_NO_WARNINGS
//#_CRT_SECURE_NO_WARNINGS
//int main()
//{
//	/*int a = 3, b = 2, c = 1,f;
//	printf("%d",f=a>b>c);*/
//
//	/*char str[10] = {"China"};
//	printf("%d", strlen(str));*/
//
//	/*int m = 123;
//	int a = ((m /10)% 10);
//	printf("%d", a);*/
//
//	/*int a[2][3] = { 2,4,6,8,10,12 };
//	printf("%d", *(&a[0][0]+ 2 * 2 + 1) )��*/
//
//	long fun(int n)
//	{
//
//	}
//}



//int main()
//{
//	int i, n;
//	int sum=0;
//	scanf_s("%d", &n);
//	for (i = 2;i <= n;i += 2)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
// return 0;
//}


//�Ӽ���Ϊһ��3 * 3���������������ݣ����ҳ����Խ�����Ԫ�ص����ֵ���Լ����ڵ��кš�

//int main()
//{
//	int arr[3][3] = {0};
//	for (int i = 0;i < 3;i++)
//	{
//		for (int j = 0;j < 3;j++)
//		{
//			scanf_s("%d", &arr[i][j]);
//		}
//	}
//
//	int max = arr[0][0],max_row=0;
//	for (int i = 0;i < 3;i++)
//	{
//		/*for (int j = 0;j < 3;j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				max_row = i;
//			}
//		}*/
//		if (arr[i][i] > max)
//		{
//			max = arr[i][i];
//			max_row = i;
//		}
//
//	}
//	printf("max=%d,max_row=%d", max, max_row + 1);
// return 0;
//}
// 
// 

//����һ����ѧ������Ϣ��ÿ��ѧ�������ݰ���ѧ�š��������Լ�һ�ſεĳɼ���Ҫ��Ӽ�������100��ѧ���ĳɼ����������������
//#define N 100




//1.����һ����������λ����������Ҫ��
//�����ʱ��λ����
//�ֱ��ӡ��ÿһλ���֣�
//�������ӡ����λ���֣�����ԭ��ʱ1234��Ӧ���4321��

//int main()
//{
//	int num;
//	scanf_s("%d", &num);
//	if (num < 0 || num>9999)
//	{
//		printf("error");
//		return 1;
//	}
//
//	if (0 < num && num <= 9)
//	{
//		printf("%dΪ��λ��\n",num);
//		printf("%d\n", num);
//		printf("����Ϊ%d", num);
//	}
//	else if (10 < num && num <= 99)
//	{
//		printf("%dΪ��λ��\n",num);
//		int a = num / 10;
//		int b = num % 10;
//		printf("%d %5d\n", a, b);
//		printf("����Ϊ%d", b*10+a);
//	}
//	else if (100 < num && num <= 999)
//	{
//		printf("%dΪ��λ��\n",num);
//		int a1 = num / 100;
//		int b1 = (num / 10) % 10;
//		int c1 = num % 10;
//		printf("%d %5d %5d\n", a1, b1,c1);
//		printf("����Ϊ%d", c1*100+b1 * 10 + a1);
//	}
//	else if (1000 < num && num <= 9999)
//	{
//		printf("%dΪ��λ��\n",num);
//		int a2 = num / 1000;
//		int b2 = (num / 100) % 10;
//		int c2 = (num % 100) / 10;
//		int d2 = num % 10;
//		printf("%d %5d %5d%5d\n", a2, b2, c2,d2);
//		printf("����Ϊ%d", d2*1000+c2 * 100 + b2 * 10 + a2);
//	}
//	return 0;
//}

//��һ���������о���a[3][3] = { 1,2,3,4,5,6,7,8,9 }�ǶԽ�����Ԫ��֮��
//int main()
//{
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int sum = 0;
//	//for (int i = 0;i < 3;i++)
//	//{
//	//	for (int j = 0;j < 3;j++)
//	//		sum += a[i][j];
//	//}
//
//	//sum = sum - a[0][0] - a[1][1] - a[2][2];
//	sum = a[0][1] + a[1][0] + a[1][2] + a[2][1];
//
//	printf("sum=%d", sum);
// return 0;
//}

//��e��ֵ��e��1 + 1 / 1!+ 1 / 2!+ 1 / 3!+ ......ֱ�����һ��С��10 ^-4Ϊֹ��
//#include <stdio.h>

//int main() {
//    // ��ʼ�� e ��ֵΪ 1����Ϊ��ʽ�ĵ�һ���� 1
//    double e = 1.0;
//    // ��ʼ���׳˵�ֵΪ 1
//    double factorial = 1.0;
//    // ��ʼ������Ϊ 1
//    int n = 1;
//    // ��ʼ����ǰ���ֵ
//    double term;
//
//    do {
//        // ���㵱ǰ��Ľ׳�
//        factorial *= n;
//        // ���㵱ǰ���ֵ
//        term = 1.0 / factorial;
//        // ����ǰ���ֵ�ۼӵ� e ��
//        e += term;
//        // ������ 1
//        n++;
//    } while (term >= 1e-4);
//
//    // �������õ��� e ��ֵ
//    printf("e �Ľ���ֵΪ: %lf\n", e);
//
//    return 0;
//}

//int fun(int n) {
//	if (n == 0)
//		return 1;
//	return n * fun(n - 1);
//}
//
//int main() {
//	int n = 1;
//	double e = 1.0;
//	double sum = 1;
//	do {
//		sum += 1.0/fun(n);
//		n++;
//	} while (1.0 / fun(n) > 1.e-4);
//	printf("sum=%f", sum);
//}


//�ýṹ������洢ѧ����Ϣ��ÿ��ѧ����������ѧ�š��ɼ����������룬���ɼ��ĸߵ�˳�����ѧ����ȫ����Ϣ

//#define N 4
//struct Student {
//	char name[10];
//	int id;
//	int score;
//}Student ;
//
////bubble sort for score
//void bubbleSort(struct Student s[], int n) 
//{
//	int i, j;
//	struct Student temp;
//	for (i = 0;i < n- 1;i++)
//	{
//		for (j = 0;j < n- i - 1;j++)
//		{
//			if (s[j].score < s[j + 1].score)
//			{
//				temp = s[j + 1];
//				s[j + 1] = s[j];
//				s[j] = temp;
//			}
//
//		}
//	}
//}
//
//int main()
//{
//	struct Student  s[N];
//	printf("������ѧ������Ϣ\n");
//	for (int i = 0; i < N; i++) {
//		printf("������� %d ��ѧ����ѧ��: ", i + 1);
//		scanf_s("%d", &s[i].id);
//
//		printf("������� %d ��ѧ��������: ", i + 1);
//		scanf_s("%s", &s[i].name,sizeof(s[i].name));//scanf_s ��ȡ�ַ���ʱ����Ҫ����ָ���ַ�������󳤶ȣ��� scanf_s("%s", s[i].name, sizeof(s[i].name));�� 
//
//		printf("������� %d ��ѧ���ĳɼ�: ", i + 1);
//		scanf_s("%d", &s[i].score);
//	}
//
//	 bubbleSort(s, N);
//	printf("This is the information tha all of the students sort by score form high to low: \n");
//	printf("id \tname\tscore\t \n");
//	for (int i = 0;i < N;i++)
//	{
//		printf("%d\t%s\t%d\t\n", s[i].id, s[i].name, s[i].score);
//	}
//	return 0;
//}

//����һ����ѧ������Ϣ��ÿ��ѧ�������ݰ���ѧ�š��������Լ�һ�ſεĳɼ���Ҫ��Ӽ�������100��ѧ���ĳɼ����������������


//�ṹ��
//#include <stdlib.h>
//# define max_students 100
//# define max_name_lenght 50
//
//typedef struct {
//	int id;
//	char name[max_name_lenght];
//	int score;
//}Student;
//
//int main()
//{
//	Student student[max_students];
//	for (int i = 0;i < max_students;i++)
//	{
//		printf("please input the socre for NO.%d \n", i + 1);
//		scanf_s("%d", &student[i].score);
//	}
//	for (int i = 0;i < max_students;i++)
//	{
//		printf("The socre for NO.%d is %d\n", i + 1,student[i].score);
//		
//	}
//}


//��дһ����������N���û��������͵绰���룬���������ֵ�˳���Ⱥ����������û��������͵绰���롣
//#define MAX_NAME_LENGHT 50
//#define N 4
//typedef struct {
//	char name[MAX_NAME_LENGHT];
//	int tel[11];
//}User;
//
//void swap(User *a ,User *b)
//{
//	User temp=*a;
//	*a = *b;
//	*b = temp;
//}
//
//void SortByName(User user[], int n)
//{
//	//˼·��ð���������������Ƚϴ�С �ó���С����һλ�������õ�����strcmp
//	for (int i = 0;i < N - 1;i++)
//	{
//		for (int j = 0;j < N - i - 1;j++)
//		{
//			if (strcmp(user[j].name, user[j + 1].name) > 0)
//				swap(&user[j], &user[j + 1]);
//		}
//	}
//}
//
//int main()
//{
//	User user[N];
//	for (int i = 0; i < N; i++) {
//		printf("������� %d ���û�������: ", i + 1);
//		// ʹ�� scanf ��ȡ����
//		scanf("%s", user[i].name);
//		printf("������� %d ���û��ĵ绰����: ", i + 1);
//		scanf("%s", user[i].tel);
//	}
//
//	// ʹ��ð��������������
//	SortByName(user, N);
//
//	printf("�������������û���Ϣ����:\n");
//	for (int i = 0; i < N; i++) {
//		printf("����: %s, �绰����: %s\n", user[i].name, user[i].tel);
//	}
//
//	return 0;
//}

//
// 5.��дһ�����򣬽���һ����abc.txt���ı��ļ���������д�롰this is a test���ַ�����Ȼ����ʾ���ļ������ݡ�
//
//2.��дһ���������԰���10������������������²��������±�Ϊ0 ��Ԫ�ؿ�ʼһֱ����//��һ��Ԫ�أ�������ǰ�ƶ�һ��λ�á��������������������ֵ������ƶ���Ľ����

//void moveElement( int array[],int N)
//{
//	int firstElement = array[0];
//	for (int i = 0;i < N - 1;i++)
//	{
//		array[i] = array[i + 1];
//	}
//	array[N - 1] = firstElement;
//}
//
//
//int main()
//{
//	int a[10];
//	int N = 10;
//	for (int i = 0;i < 10;i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//
//	moveElement(a,10);
//
//	printf("�ź���Ϊ��\n");
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d", a[i]);
//	}
//
//
//3.ĳ����N��ѧ����ÿ��ѧ������Ϣ����ѧ�š����������ſεĳɼ����Ӽ�������N��ѧ������Ϣ����ӡ��N��ѧ�������ſ�ƽ���ɼ����Լ���߷ֵ�ѧ�����ݣ�����ѧ�š����������ſεĳɼ���ƽ���֣�

# define N 3

typedef struct {
	int id;
	char name[50];
    int score1;
	int score2;
	int score3;
	double average;
}Student;

double average(Student students[], int n)
{
	for (int i = 0;i < n; i++)
	{
		students[i].average = (students[i].score1 + students[i].score2 + students[i].score3)/3;
	}
	return 0;
}

int  Max_average(Student students[], int n) {
	double max_average = students[0].average;
	int maxIndex = 0;
	for (int i = 0;i < n;i++)
	{
		if (students[i].average > max_average)
		{
			max_average = students[i].average;
			maxIndex = i;
		}
	}
	return (maxIndex);
}


int main()
{
	Student students[N];
	for (int i = 0;i < N - 1;i++)
	{
		printf("�������%d��ѧ������Ϣ��\n", i + 1);
		printf("���֣�\n");
		scanf_s("%s", &students[i].name);
		printf("ѧ�ţ�\n");
		scanf_s("%d", &students[i].id);
		
		printf("��%d�ε����ſγɼ���\n",i+1);
		scanf_s("%d %d %d", &students[i].score1, &students[i].score2, &students[i].score3);
	   
		average(students, N);
		

		printf("\nÿ��ѧ�������ſ�ƽ���ɼ���\n");
		for (int i = 0; i < N; i++) {
			printf("ѧ�ţ�%d��������%s��ƽ���ɼ���%.2f\n", students[i].id, students[i].name, students[i].average);
		}
	}

	int  maxIndex = Max_average(students, N);
	// ��ӡ��߷�ѧ��������
	printf("\n��߷ֵ�ѧ�����ݣ�\n");
	printf("ѧ�ţ�%d\n", students[maxIndex].id);
	printf("������%s\n", students[maxIndex].name);
	printf("���ſγɼ���%d %d %d\n", students[maxIndex].score1, students[maxIndex].score2, students[maxIndex].score3);
	printf("ƽ���֣�%.2f\n", students[maxIndex].average);

	return 0;

}