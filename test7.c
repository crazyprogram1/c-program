#define _CRT_SECURE_NO_WARNINGS 1
//����ѧϰ
//�⺯�� �Զ��庯�� �������� �������� ����Ƕ�׵��ú���ʽ���� ���������Ͷ��� �����ݹ�
//����һ
//#include<stdio.h>
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}//�Զ��庯��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
// �����
//1. �⺯�� 1 io���� �ַ������� �ڴ�������� ʱ�䡢���ں��� ��ѧ���� �����⺯��
//strcpy��ʹ��
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#############";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strcpy-string copy-i�ַ�������
//	//strlen-string length-�ַ��������й�
//	return 0;
//}
//memset��ʹ��
//#include<stdio.h>
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
// ������
//�Զ��庯��
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = get_max(num1, num2);
//	max = get_max(300, 200);
//	printf("max=%d\n", max);
//	return 0;
//}
//#include<stdio.h>
//void swap(int x, int y)//void û�з���ֵ
//{
//	int a = 0;
//	a = x;
//	x = y;
//	y = a;
//}//��Ϊx y��num1 num2û�й�ϵ �����ܽ���
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	printf("a=%d b=%d\n", num1, num2);
//	swap(num1, num2);
//	printf("a=%d b=%d\n", num1,num2);
//
//	return 0;
//}
//#include<stdio.h>
//void swap(int x, int y)//void û�з���ֵ
//{
//	int a = 0;
//	a = x;
//	x = y;
//	y = a;
//}//��Ϊx y��num1 num2û�й�ϵ �����ܽ���
/*#include<stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;
	*pa=20;
	printf("%d\n", a);
	return 0;
}*///��ָ���ܵ�����
//#include<stdio.h>
////void swap1(int x, int y)//void û�з���ֵ
////{
////	int a = 0;
////	a = x;
////	x = y;
////	y = a;
////}
//void swap2(int* pa, int* pb)
//{
//	int a = 0;
//	a = *pa;
//	*pa = *pb;
//	*pb = a;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	printf("a=%d b=%d\n", num1, num2);
//
//	swap2(&num1, &num2);
//
//	printf("a=%d b=%d\n", num1,num2);
//
//	return 0;
//}
//������
//ʵ�ʲ���(ʵ��) ���� ���� ���ʽ ����
//��ʽ����(�β�) �����ڲ������� ��ȥ�ͱ�����
//#include<stdio.h>
//void swap1(int x, int y)//x y ���β�
//{
//	int a = 0;
//	a = x;
//	x = y;
//	y = a;
//}//��ʵ�δ����βε�ʱ��
////�β���ʵ��ʵ�ε�һ����ʱ����
////���βε��޸��ǲ���ı�� ����swap1 �����޷���ֵ
//void swap2(int* pa, int* pb)
//{
//	int a = 0;
//	a = *pa;
//	*pa = *pb;
//	*pb = a;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	printf("a=%d b=%d\n", num1, num2);
//	swap1(num1, num2);//num1 num2 ��ʵ�� 
//	swap2(&num1, &num2);//&num1 num2��ʵ��
//
//	printf("a=%d b=%d\n", num1,num2);
//
//	return 0;
//}
//��������: ��ֵ���� ��ַ����
//������������100��200
//#include<stdio.h>
//int is_prime(int n)
//{
//	//2->n-1
//
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//		
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d", i);
//	}
//	return 0;
//}
//��1000��2000������
//#include<stdio.h>
//int is_leap_year(int y)
//{
//	if((y%4==0&&y%100!=0)||(y%400==0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//������ֲ���
//#include<stdio.h>
//int binary_search(int arr[], int k,int sz)
//{
//	
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//����ȥ����arr�ĵ�ַ
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//}
//ÿ����һ
//#include<stdio.h>
//void add(int*p)
//{
//    (* p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}
//�����庯����Ƕ�׵��ú���ʽ����
//#include<stdio.h>
////int main()
////{
////	int len = 0;
////	//1
////	len = strlen("abc");
////	printf("%d\n", len);
////	//2
////	printf("%d\n", strlen("abc"));
////	return 0;
////}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf����ֵΪ�ַ����� ��ӡΪ4321
//	return 0;
//}
//���������Ͷ���
//#include<stdio.h>
//int add(int x.int y);//��������Ҫ����������ǰ�� ���߷���ͷ�ļ�
////�Լ�����ͷ�ļ�����ʱinclude"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int add(int x, int y)
//{
//	int z = x + y;
//	return 0;
//}
