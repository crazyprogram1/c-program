#define _CRT_SECURE_NO_WARNINGS 1
//ָ��
//#include<stdio.h>
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//32 λ����1 62 λ����2
//	printf("%d\n", sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char *pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char* p = "abcdef";//���׵�ַ����ָ��
//	//*p = 'w';//�ᱨ������д���е� abdef �����ַ����ǲ��ܸĵ�
//	//printf("s\n", p);
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "avcdef";
//	char* p = "abcdef";
//	char* p1 = "abcdef";
//	if (p == p1)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//}
//ָ������
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ�������=ָ������
//	char* ch[5];//����ַ�ָ�������=ָ������
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int i = 0;
//	int* ch[4] = { &a,&b,&c,&d };
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(ch[i]));
//	}
//	return 0;
//}
//ָ��������ȷ�÷�
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 2,3,4,5 };
//	int arr3[] = { 3,4,5,6,};
//	int* parr[] = {arr1,arr2,arr3};//ָ������
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//}
//����ָ�� - ��ָ��
//#include<stdio.h>
//int main()
//{
//	int* p = NULL;//p������ָ�� - ָ�����͵�ָ��-���Դ�����͵ĵ�ַ
//	char* pc = NULL;//pc���ַ�ָ��-ָ���ַ��ĵ�ַ- ���Դ���ַ��ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*parr)[10] = &arr;//����ָ��-ָ�������ָ��-�������ĵ�ַ
//	//parr��������ָ��
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char* arr[5];
//	char*(*pa)[5] = &arr;//char* Ԫ������ 
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;		
//}
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", *(*p + i));
//	}
//}
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6,},{3,4,5,6,7} };
//	print1(arr, 3, 5);//arr - ������ - ������������Ԫ�ص�ַ
//	return 0;
//}//��arr����һά����

//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6,},{3,4,5,6,7} };
//	print2(arr, 3, 5);//arr - ������ - ������������Ԫ�ص�ַ
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[5];          //arr��һ��5��Ԫ�ص���������
//	int* parr1[10];      //parr1 ��һ�����飬����10��Ԫ�أ�ÿ��Ԫ�ص�������int* ��parr1��ָ������
//	int(*parr2)[10];     //parr2 ��һ��ָ�룬��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������in - parr2������ָ��
//	int(*parr3[10])[5]; //parr3 �Ǹ����飬��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�� ��Ԫ��ָ��ָ��������5��Ԫ�أ�ÿ��Ԫ����int
//
//}