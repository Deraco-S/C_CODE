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
//	printf("%d", *(&a[0][0]+ 2 * 2 + 1) )；*/
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


//从键盘为一个3 * 3整型数组输入数据，并找出主对角线上元素的最大值，以及所在的行号。

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

//建立一百名学生的信息表，每个学生的数据包括学号、姓名、以及一门课的成绩，要求从键盘输入100名学生的成绩，并将它们输出。
//#define N 100




//1.输入一给不多于五位的正整数，要求：
//求出它时几位数；
//分别打印出每一位数字；
//按逆序打印出各位数字，例如原数时1234，应输出4321。

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
//		printf("%d为个位数\n",num);
//		printf("%d\n", num);
//		printf("逆序为%d", num);
//	}
//	else if (10 < num && num <= 99)
//	{
//		printf("%d为二位数\n",num);
//		int a = num / 10;
//		int b = num % 10;
//		printf("%d %5d\n", a, b);
//		printf("逆序为%d", b*10+a);
//	}
//	else if (100 < num && num <= 999)
//	{
//		printf("%d为三位数\n",num);
//		int a1 = num / 100;
//		int b1 = (num / 10) % 10;
//		int c1 = num % 10;
//		printf("%d %5d %5d\n", a1, b1,c1);
//		printf("逆序为%d", c1*100+b1 * 10 + a1);
//	}
//	else if (1000 < num && num <= 9999)
//	{
//		printf("%d为四位数\n",num);
//		int a2 = num / 1000;
//		int b2 = (num / 100) % 10;
//		int c2 = (num % 100) / 10;
//		int d2 = num % 10;
//		printf("%d %5d %5d%5d\n", a2, b2, c2,d2);
//		printf("逆序为%d", d2*1000+c2 * 100 + b2 * 10 + a2);
//	}
//	return 0;
//}

//求一个三行三列矩阵a[3][3] = { 1,2,3,4,5,6,7,8,9 }非对角线上元素之和
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

//求e的值，e≈1 + 1 / 1!+ 1 / 2!+ 1 / 3!+ ......直至最后一项小于10 ^-4为止。
//#include <stdio.h>

//int main() {
//    // 初始化 e 的值为 1，因为公式的第一项是 1
//    double e = 1.0;
//    // 初始化阶乘的值为 1
//    double factorial = 1.0;
//    // 初始化项数为 1
//    int n = 1;
//    // 初始化当前项的值
//    double term;
//
//    do {
//        // 计算当前项的阶乘
//        factorial *= n;
//        // 计算当前项的值
//        term = 1.0 / factorial;
//        // 将当前项的值累加到 e 中
//        e += term;
//        // 项数加 1
//        n++;
//    } while (term >= 1e-4);
//
//    // 输出计算得到的 e 的值
//    printf("e 的近似值为: %lf\n", e);
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


//用结构体数组存储学生信息，每个学生有姓名、学号、成绩。键盘输入，按成绩的高低顺序输出学生的全部信息

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
//	printf("请输入学生的信息\n");
//	for (int i = 0; i < N; i++) {
//		printf("请输入第 %d 个学生的学号: ", i + 1);
//		scanf_s("%d", &s[i].id);
//
//		printf("请输入第 %d 个学生的姓名: ", i + 1);
//		scanf_s("%s", &s[i].name,sizeof(s[i].name));//scanf_s 读取字符串时，需要额外指定字符串的最大长度，即 scanf_s("%s", s[i].name, sizeof(s[i].name));。 
//
//		printf("请输入第 %d 个学生的成绩: ", i + 1);
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

//建立一百名学生的信息表，每个学生的数据包括学号、姓名、以及一门课的成绩，要求从键盘输入100名学生的成绩，并将它们输出。


//结构体
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


//编写一个程序，输入N名用户的姓名和电话号码，按姓名的字典顺序先后排序后，输出用户的姓名和电话号码。
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
//	//思路是冒泡排序，用姓名来比较大小 得出最小的那一位。这里用到函数strcmp
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
//		printf("请输入第 %d 个用户的姓名: ", i + 1);
//		// 使用 scanf 读取姓名
//		scanf("%s", user[i].name);
//		printf("请输入第 %d 个用户的电话号码: ", i + 1);
//		scanf("%s", user[i].tel);
//	}
//
//	// 使用冒泡排序按姓名排序
//	SortByName(user, N);
//
//	printf("按姓名排序后的用户信息如下:\n");
//	for (int i = 0; i < N; i++) {
//		printf("姓名: %s, 电话号码: %s\n", user[i].name, user[i].tel);
//	}
//
//	return 0;
//}

//
// 5.编写一个程序，建立一个“abc.txt”文本文件，向其中写入“this is a test”字符串，然后显示该文件的内容。
//
//2.编写一个函数，对包含10个整数的数组进行如下操作：从下标为0 的元素开始一直到最//后一个元素，依次向前移动一个位置。在主函数中输入数组的值并输出移动后的结果。

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
//	printf("排好序为：\n");
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d", a[i]);
//	}
//
//
//3.某班有N名学生，每个学生的信息包括学号、姓名、三门课的成绩，从键盘输入N名学生的信息，打印出N名学生的三门课平均成绩，以及最高分的学生数据（包括学号、姓名、三门课的成绩、平均分）

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
		printf("请输入第%d个学生的信息：\n", i + 1);
		printf("名字：\n");
		scanf_s("%s", &students[i].name);
		printf("学号：\n");
		scanf_s("%d", &students[i].id);
		
		printf("第%d课的三门课成绩：\n",i+1);
		scanf_s("%d %d %d", &students[i].score1, &students[i].score2, &students[i].score3);
	   
		average(students, N);
		

		printf("\n每个学生的三门课平均成绩：\n");
		for (int i = 0; i < N; i++) {
			printf("学号：%d，姓名：%s，平均成绩：%.2f\n", students[i].id, students[i].name, students[i].average);
		}
	}

	int  maxIndex = Max_average(students, N);
	// 打印最高分学生的数据
	printf("\n最高分的学生数据：\n");
	printf("学号：%d\n", students[maxIndex].id);
	printf("姓名：%s\n", students[maxIndex].name);
	printf("三门课成绩：%d %d %d\n", students[maxIndex].score1, students[maxIndex].score2, students[maxIndex].score3);
	printf("平均分：%.2f\n", students[maxIndex].average);

	return 0;

}